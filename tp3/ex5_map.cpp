#include <iostream>
#include <unordered_map>
#include <string>
#include <tuple>

using namespace std;

// Définition du type pour représenter une ville
using Ville = tuple<string, double, double>;

// Fonction pour ajouter une ville à une unordered_map
void ajoutVille(unordered_map<string, Ville>& mapVilles, const Ville& ville) {
    mapVilles[get<0>(ville)] = ville;
}

// Fonction pour trouver une ville dans une unordered_map par son nom
Ville find_ville(const unordered_map<string, Ville>& mapVilles, const string& nom) {
    auto it = mapVilles.find(nom);
    return (it != mapVilles.end()) ? it->second : make_tuple("", 0.0, 0.0);
}

// Fonction pour afficher les informations d'une ville
void affiche_ville(const Ville& ville) {
    if (get<0>(ville) != "") {
        cout << "La ville : " << get<0>(ville) << endl;
        cout << "Latitude  : " << get<1>(ville) << endl;
        cout << "Longitude : " << get<2>(ville) << endl;
    } else {
        cout << "Ville non trouvée." << endl;
    }
}

int main() {
    // Utilisation d'une unordered_map pour stocker les villes
    unordered_map<string, Ville> mapVilles = {
        {"Tunis", {"Tunis", 10.1658, 36.8065}},
        {"Sousse", {"Sousse", 10.6412, 35.8252}},
        {"Sfax", {"Sfax", 10.7682, 34.7373}},
    };

    string nomAChercher;
    cout << "Veuillez saisir le nom d'une ville à chercher : ";
    cin >> nomAChercher;

    affiche_ville(find_ville(mapVilles, nomAChercher));

    return 0;
}

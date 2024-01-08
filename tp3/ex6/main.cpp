#include "tableau.h"

int main() {
    vector<Ville> villes = {
        {"Tunis", 10.1658, 36.8065},
        {"Sousse", 10.6412, 35.8252},
        {"Sfax", 10.7682, 34.7373},
    };

    // Ajout d'une nouvelle ville
    Ville nouvelleVille = {"NouvelleVille", 11.123, 37.456};
    ajoutVille(villes, nouvelleVille);

    // Affichage des villes avant le tri
    cout << "Villes avant le tri : " << endl;
    afficherVecteur(villes);

    // Trier les villes par nom
    trierParNom(villes);

    // Affichage des villes après le tri
    cout << "\nVilles après le tri par nom : " << endl;
    afficherVecteur(villes);

    // Recherche de la ville par son nom
    string nomAChercher = "Sousse";
    Ville result = find_ville(villes, nomAChercher);

    // Affichage du résultat
    cout << "\nRésultat de la recherche : " << endl;
    affiche_ville(result);

    return 0;
}
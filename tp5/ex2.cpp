#include <iostream>
#include <cmath>

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}
    void affichage() {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
    Vecteur3D somme(Vecteur3D& autre)  {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }
    float produitScalaire( Vecteur3D& autre) {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    bool coincide( Vecteur3D& autre) {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    // Fonction pour obtenir la norme du vecteur
    float norme() {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme
    // Retourné par valeur
    Vecteur3D normaxValeur( Vecteur3D& autre) {
        return (norme() > autre.norme()) ? *this : autre;
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme
    // Retourné par adresse
    void normaxAdresse( Vecteur3D& autre, Vecteur3D& resultat) {
        resultat = (norme() > autre.norme()) ? *this : autre;
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme
    // Retourné par référence
    Vecteur3D& normaxReference( Vecteur3D& autre) {
        return (norme() > autre.norme()) ? *this : autre;
    }
};

int main() {
    Vecteur3D vecteur1(1.0, 2.0, 3.0);
    Vecteur3D vecteur2(4.0, 5.0, 6.0);

    // Affichage des vecteurs
    std::cout << "Vecteur 1 : ";
    vecteur1.affichage();

    std::cout << "Vecteur 2 : ";
    vecteur2.affichage();

    // Somme des vecteurs
    Vecteur3D somme = vecteur1.somme(vecteur2);
    std::cout << "Somme des vecteurs : ";
    somme.affichage();

    // Produit scalaire
    float produit = vecteur1.produitScalaire(vecteur2);
    std::cout << "Produit scalaire : " << produit << std::endl;

    // Coincide
    bool coincident = vecteur1.coincide(vecteur2);
    std::cout << "Les vecteurs coincident : " << (coincident ? "Oui" : "Non") << std::endl;

    // Norme des vecteurs
    std::cout << "Norme du vecteur 1 : " << vecteur1.norme() << std::endl;
    std::cout << "Norme du vecteur 2 : " << vecteur2.norme() << std::endl;

    // Vecteur avec la plus grande norme
    Vecteur3D resultatValeur = vecteur1.normaxValeur(vecteur2);
    std::cout << "Vecteur avec la plus grande norme (retourné par valeur) : ";
    resultatValeur.affichage();

    Vecteur3D resultatAdresse;
    vecteur1.normaxAdresse(vecteur2, resultatAdresse);
    std::cout << "Vecteur avec la plus grande norme (retourné par adresse) : ";
    resultatAdresse.affichage();

    Vecteur3D& resultatReference = vecteur1.normaxReference(vecteur2);
    std::cout << "Vecteur avec la plus grande norme (retourné par référence) : ";
    resultatReference.affichage();

    return 0;
}

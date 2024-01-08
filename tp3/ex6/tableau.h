#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

// Définition du type pour représenter une ville
using Ville = tuple<string, double, double>;

// Fonction pour ajouter une ville à un vecteur de tuples
void ajoutVille(vector<Ville>& vec, const Ville& ville);

// Fonction pour trouver une ville dans un vecteur de tuples par son nom
Ville find_ville(const vector<Ville>& vec, const string& nom);

// Fonction pour afficher les informations d'une ville
void affiche_ville(const Ville& ville);

// Fonction pour afficher un vecteur de tuples (pour tester)
void afficherVecteur(const vector<Ville>& vec);

// Fonction pour trier un vecteur de tuples par le nom des villes
void trierParNom(vector<Ville>& vec);

#endif

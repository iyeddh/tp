#include <iostream>
#include <vector>
#include<string>
#include<tuple>
using namespace std;
void ajoutVille(vector<tuple<string,double,double>>&vec,tuple<string, double, double>&ville){
  vec.push_back(ville);
}
tuple<string,double,double> find_ville(vector<tuple<string,double,double>>&vec,string &nom){
  for (const auto& ele : vec) {
        if (get<0>(ele) == nom) {
            return ele;
            break;
        }
    }
    return make_tuple<string,double,double>("",0,0);
  }
void affiche_ville (tuple<string,double,double>&ville){
  cout<<"la ville  :  "<<get<0> (ville);
  cout<<"\nlatitude   :  "<< get<1> (ville);
  cout<< "\nlongitude :  " << get<2> (ville)<<endl;
}
int main(){
   vector<tuple<string, double, double>> villes = {
        {"Tunis", 10.1658, 36.8065},
        {"Sousse", 10.6412, 35.8252},
        {"Sfax", 10.7682, 34.7373},
    };
    string nom_achercher;
    cout << "veuiller saisir le nom d'une ville a chercher: ";
    cin >> nom_achercher;
    affiche_ville(find_ville(villes,nom_achercher));
}

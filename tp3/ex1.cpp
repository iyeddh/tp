#include<iostream>
using namespace std;
void remplissage(int *t){
  for (int i = 0; i < sizeof(t); i++)
  {
    cout << "Entrez le nombre a mettre dans l'element "<<i+1<<" : ";
    cin >> t[i];
  }
  
}
void affichage(int *t){
  int cpt=0;
  for (int i = 0; i < sizeof(t); i++)
  {
    cout<<"le nombmbre ["<<i+1<<"] est :"<<t[i]<<endl;
    if (t[i]>=0){
      cpt++;
    }
  }
  cout<<'ce tableau contient  '<<cpt<<'  nombre positive';
  
}
int main(){
  int taille ;
  cout<<"donner le taille du tableau";
  cin>>taille;
  int *t= new int[taille];
  remplissage(t);
  affichage(t);
}
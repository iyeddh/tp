#include<iostream>
#include<string>
#include<random>
using namespace std;
double val(){
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<double> dis(0.0, 1.0);
    return dis(gen);
}
void tranc(int height,int largeur, int hauteur_tranc){
  for (int m = 0; m < hauteur_tranc; m++)
  {
    for (int i = 0; i <= height-largeur+1; i++)
  {
    cout<<" ";
  }
  for (int i = 0; i < largeur; i++)
  {
    cout<<"|";
  }
  cout<<endl;
  }
}
void tree(int height,int nbr_boule ,int hauteur_tranc,int largeur){
  string x="*";
  for (int i = 0; i < height; i++)
  {
    for (int k = height; k>i; k--)
    {
      cout<<" ";
    }
    cout<<x<<endl;
    x=x+"*";
    if (nbr_boule != 0 && val() < 0.5){
      x=x+"O";
      nbr_boule--;
    }
    else{
      int l=x.length();
      x="";
      for (int i = 0; i < l; i++)
      {
        x.append("*");
      }
      x.append("*");
      
    }
  }
  tranc(height,largeur,hauteur_tranc);
}
int main () {
  tree(6,1,2,3);

}
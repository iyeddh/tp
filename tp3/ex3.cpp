#include<iostream>
#include<vector>
using namespace std;
void remplir(vector<int> &vec,int N){
  int ele;
  for (int i = 0; i < N; i++)
  {
    cout<<"donner l'element ["<<i+1<<"] : ";
    cin>>ele;
    vec.push_back(ele);
  }
}
int calcul(vector<int>vec1,vector<int> vec2,int N){
  int s=0;
  for (int i = 0; i < N; i++)
  {
    s=s+vec1[i]*vec2[i];
  }
  return s;
}
void affichevec(vector<int>vec){
  cout<<"{";
  for(int const& ele : vec){
    cout<<ele<<'  ';
  }
  cout<<"}"<<endl;
}
void afficheValeur(vector<int>vec1,vector<int>vec2){
  cout<<"le resultat de la multiplication "<<"de U=";
  affichevec(vec1);
  cout<< "et v=";
  affichevec(vec2);
  cout<<"est ="<<calcul(vec1,vec2,vec1.size())<<endl;
}
int main(){
  vector<int> vec1,vec2;
  cout<<"donner le dimention de vecteur :";
  int n;
  cin>>n;
  remplir(vec1,n);
  remplir(vec2,n);
}
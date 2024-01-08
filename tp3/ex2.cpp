#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
void remplir(int N,int t[]){
  for (int i = 0; i < N; i++)
  {
    cout<<"donner l'element ["<<i+1<<"]  :";
    cin>>t[i];
  }
  
}
void recherche(int V,int N,int t[]){
  int i=0;
  bool b=false;
  while (i<N && b !=true )
  {
    if (V==t[i]){
      b=true;
    }
    else i++;
  }
  if(b==true){
    cout<<"L'element "<<V<<" est present a la position:"<<i+1<<endl;
  }
  else{
    cout<<"L'element "<<V<<" n'est pas presente dans le tableau."<<endl;
  }
}
void remplirArray(array<int, 7>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << "Entrez la valeur pour l'élément " << i + 1 << " : ";
        cin >> arr[i];
    }
}
void rechercheArray(array<int, 7>& arr, int V) {
    bool b=false;
    int index=0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == V) {
            b=true;
            index=i+1;
            break;
        }
    }
    if(b){
      cout << V << " se trouve dans le tableau à la position " << index <<endl;
    }
    else{
      cout<<"l'element est intouvable dans le tableau";
    }

}
void remplirVector(vector<int> &vec, int N){
  int ele;
  for (int i = 0; i < N; i++)
  {
    cout<<"donner l'element ["<<i+1<<"] : ";
    cin>>ele;
    vec.push_back(ele);
  }
}
void rechercheVector(vector<int> vec,int V){
  auto f=find(vec.begin(),vec.end(),V);
  if (f != vec.end()) {
        int index = distance(vec.begin(), f);
        cout << "se trouve dans le tableau à la position " << index << endl;
    } else {
        cout << "l'element est intouvable dans le tableau" << endl;
    }
  }
int main(){
  int taill;
  int t[taill],V;
  cout<<"Donner le nombre d'elements que vous voulez mettre dans le tableau: ";
  cin>>taill;
  cout<<"donner le valeur que tu veut chercher :";
  cin>>V;
  array<int,7>arr;
  vector<int> vec;
  remplir(taill,t);
  remplirArray(arr);
  remplirVector(vec,taill);
  recherche(V,taill,t);
  rechercheArray(arr,V);
  rechercheVector(vec,V);
}
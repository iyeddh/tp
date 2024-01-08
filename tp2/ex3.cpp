#include<iostream>
using namespace std;
void increament_ref(int &x){
  x++;
}
void permuter_ref(int &x,int &y){
  int temp=x;
  x=y;
  y=temp;
}
void increament_add(int *x){
  *x++;
}
void permuter_add(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main(){
  int x,y;
  //pour les referance 
  cout<<"donner la valeur des deux nombres : ";
  cin>>x>>y;
  cout<<"valeur avant l'increment : "<<x<<endl;
  increament_ref(x);
  cout<<"valeur apres l'incrementation :" << x<<endl;
  permuter_ref(x,y);
  cout<<"valeur apres la permutation : \n x: " <<x <<endl<<"y:  "<<y<<endl  ;
  //pour les adresse 
  cout<<"donner la valeur des deux nombres : ";
  cin>>x>>y;
  cout<<"valeur avant l'increment : "<<x<<endl;
  increament_add(&x);
  cout<<"valeur apres l'incrementation :" << x<<endl;
  permuter_add(&x,&y);
  cout<<"valeur apres la permutation : \n x: " <<x <<endl<<"y:  "<<y<<endl  ;
}
#include<iostream>
using namespace std;
int main(){
int min = 0, cpt=0,x;
cout<<"donner l'entier "<<cpt+1<<endl;
cin>>x;
min=x;
cpt++;
while (cpt<10){
  cout<<"donner l'entier "<< cpt+1<<endl;
  cin>>x;
  if (x <= min){
    min=x;
  }
  cpt++;
}

  
}
#include<iostream>
#include<cmath>
using namespace std;
double f(double x, bool &OK){
  if ((x-1)*(2-x)>=0){
    OK=true;
    return sqrt((x-1)*(2-x));
  }
  else{
    OK=false;
  }
}
int main(){
  double x;
  bool ok;
  cout<<"donner le valeur de x"<<endl;
  cin>>x;
  f(x,ok);
  if (ok){
    cout<<"racine carrer de (x-1)*(2-x)="<<f(x,ok)<<endl;
  }
  else {
    cout<<"le racine ne peut pas calculer des valeurs négative "<<endl;
  }
}
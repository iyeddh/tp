#include<iostream>
using namespace std;
int f(int n){
  if(n==0){
    return 3;
  }
  else{
    return 3*f(n-1)+4;
  }
}
int main (){
  int n;
  cin>>n;
  cout<<"la valeur de ce terme est : "<<f(n);
}
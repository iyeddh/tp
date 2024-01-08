#include<iostream>
using namespace std;
int factoriel(int x){
  if (x=0){
    return 1;
  }
  else {
    return x*factoriel(x-1);
  }
}
int main(){
  int x;
  while (x<0)
  {
    cout<<"le nombre doit etre positive "<< endl;
    cin>>x;
  }
  cout<<factoriel(x);
}

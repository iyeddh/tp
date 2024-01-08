#include<iostream>
using namespace std;
pair<int,int> mini_maxi(int t[],int N){
  int min = t[0], max=t[0];
  for (int i = 1; i <N ; i++)
  {
    if (min<= t[i]){
      min = t[i];
    }
    if (max>=t[i]){
      max = t [i] ;
    }
  }
  return make_pair(min,max);
  
}
int main(){
  int N = 5;
  int t[N] = {3, 1, 4, 1, 5};
  pair<int,int> p = mini_maxi(t,N);
  cout<<"le minimant de ce tableau est : "<<p.first<<"\n le maximant de ce tableau est : "<<p.second;
}
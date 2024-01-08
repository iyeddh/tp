#include<iostream>
#include<cmath>
using namespace std;
double distance (double ax,double ay,double bx,double by){
  return sqrt(pow(ax-bx,2)+pow(ay-by,2));
}
int main(){
  double ax,ay,bx,by;
  cout<<"donner les cordonners de la point a";
  cin>>ax>>ay;
  cout<<"donner les cordonners de la point b";
  cin>>bx>>by;
  cout<<"la distance entre les deux point est   :"<<distance(ax,ay,bx,by);
}
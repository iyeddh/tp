#include<iostream>
#include<cmath>
using namespace std;
class Complexe{
  private:
    double re,img;
  public:
    Complexe(double re,double img): re{re},img{img} {};
    void affichage(){ cout << "Z= "<< re << "+(" << img<<"i)" <<endl;}
    double module(){
      return sqrt(pow(re,2)+pow(img,2));
    }
    Complexe conjuger(){
      return Complexe(re,-img);
    }
    Complexe operator+(Complexe &autre){
      return Complexe(re+autre.re,img+autre.img);
    }
    Complexe operator+(double d){
      return Complexe(re+d,img);
    }
    Complexe operator-(Complexe &autre){
      return Complexe(re-autre.re,img-autre.img);
    }
    Complexe operator-(double d){
      return Complexe(re-d,img);
    }
    Complexe operator*(Complexe &autre){
      return Complexe(re*autre.re - img * autre.img , re * autre.img + img * autre.re );
    }
    Complexe operator*(double d){
      return Complexe(re*d,img*d);
    }

};
int main() {
  Complexe z(1,1),z1(2,2);
  z.affichage();
  cout<<z.module()<<endl;
  z.conjuger().affichage();
  (z+z1).affichage();
  (z-z1).affichage();
  (z*z1).affichage();
}
#include<iostream>
#include<cmath>
using namespace std;
class Point {
private:
    double x, y;

public:
    Point() : x(0), y(0) {}
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    void affiche() {
        cout << "Point : (" << x << ", " << y << ")" <<endl;
    }
    void setX(double x){
      this->x=x;
    }
    double getX(){
      return this->x;
    }
    void setY(double y){
      this->y=y;
    }
    double getY(){
      return this->y;
    }
    bool operator ==(Point& p2) {
    return this->x == p2.x && this->y == p2.y;
    }
    double distance( Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}
};
class Cercle{
  private:
    double rayon;
    Point centre;
  public:
    void affiche(){
      cout<<"le cetre: ";
      centre.affiche();
      cout<<"Le Rayon est de: "<<rayon<<endl;
    }
    void setRayon (double &rayon){
      while (true){
        if (rayon > 0) {
          this->rayon=rayon;
          break;
      }
      else{
        cout<<"Erreur le rayon doit etre superieur a zero!"<<endl;
        cin>>rayon;
        }
      }
    }
    double getRayon(){
      return rayon; 
    }
    Point getCentre(){
      return centre;
    }
    void translation(pair<double,double> vecteur_de_translation){
      centre.setX((double)centre.getX()+vecteur_de_translation.first);
      centre.setY((double)centre.getY()+vecteur_de_translation.second);
    }
    double surface(){
      return M_PI*pow(rayon,2);
    }
    double perimetre(){
      return 2*M_PI*rayon;
    }
   bool operator ==( Cercle& c) {
        return centre == c.getCentre() && rayon == c.getRayon();
    }
  void appartenance(Point p){
     if(centre.distance(centre,p)==rayon){
      cout<<"La point est dans le cercle"<<endl;
     }else if (centre.distance(centre,p)<rayon){
      cout<<"La point est dans l'intérieur du cercle"<<endl;
     }else{
      cout<<"La point est à l'extérieur du cercle"<<endl;
     }
  }
  Cercle(double rayon,Point p):rayon{rayon},centre{p}{}
  Cercle(double rayon, pair<double, double> p) : centre(p.first, p.second), rayon(rayon) {}

};
int main(){
  Cercle c(1,(10,10));
  cout<<"surface: "<<c.surface()<<endl;
  cout<<"perimetre: "<<c.perimetre()<<endl;
  c.setRayon(c.getRayon()*2);
  cout<<"surface: "<<c.surface()<<endl;
  cout<<"perimetre: "<<c.perimetre()<<endl;
  pair<double,double> p= make_pair(-c.getCentre().getX(),-c.getCentre().getY());
  c.translation(p);
  Point p1(1,1),p2(3,3);
  c.appartenance(p1);
  c.appartenance(p2);
  Cercle c1(1,2);
  cout<<((c1==c) ? "egaux":"ne sont pas de meme")<<endl;
}
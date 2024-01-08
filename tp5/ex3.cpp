#include <iostream>
#include <cmath>

class Point {
private:
    double x, y;

public:
    Point() : x(0), y(0) {}
    Point(double x = 0, double y = 0) : x(x), y(y) {}

    //Point(Point& autre) : x(autre.x), y(autre.y) {}

    void affiche() {
        std::cout << "Point : (" << x << ", " << y << ")" << std::endl;
    }

    // Fonction amie pour comparer deux points
    friend bool comparer( Point& p1,Point& p2);

    // Fonction amie pour calculer la distance entre deux points
    friend double distance( Point& p1, Point& p2);

    // Fonction amie pour trouver le milieu entre deux points
    friend Point milieu(Point& p1,Point& p2);
};

// Fonction amie pour comparer deux points
bool comparer( Point& p1, Point& p2) {
    return p1.x == p2.x && p1.y == p2.y;
}

// Fonction amie pour calculer la distance entre deux points
double distance( Point& p1, Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return std::sqrt(dx * dx + dy * dy);
}

// Fonction amie pour trouver le milieu entre deux points
Point milieu( Point& p1, Point& p2) {
    double mx = (p1.x + p2.x) / 2;
    double my = (p1.y + p2.y) / 2;
    return Point(mx, my);
}

int main() {
    // Exemples d'utilisation de la classe Point
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);

    // Affichage des points
    std::cout << "Point 1 : ";
    point1.affiche();

    std::cout << "Point 2 : ";
    point2.affiche();

    // Comparaison des points
    std::cout << "Les points sont identiques : " << (comparer(point1, point2) ? "Oui" : "Non") << std::endl;

    // Distance entre les points
    std::cout << "Distance entre les points : " << distance(point1, point2) << std::endl;

    // Point milieu
    Point pointMilieu = milieu(point1, point2);
    std::cout << "Point milieu : ";
    pointMilieu.affiche();

    return 0;
}

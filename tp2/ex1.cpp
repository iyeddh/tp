#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;
    int e;
    cin>>e;
    p = &e;
    cout << "la valeur de l'entier : " << *p << endl;
    cout << "Adresse de l'emplacement mémoire de l'entier : " << p << endl;
    double* p_reel;
    double r;
    cin>>r;
    p_reel = &r;
    cout << "\nNombre réel : " << *p_reel << endl;
    cout << "Adresse de l'emplacement mémoire du nombre réel : " << p_reel<< endl;
    return 0;
}

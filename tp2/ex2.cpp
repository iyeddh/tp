#include <iostream>
using namespace std;
bool estEgalParValeur(int a, int b) {
    return (a == b);
}
bool estEgalParAdresse(int* ptrA,int* ptrB) {
    return (*ptrA == *ptrB);
}
bool estEgalParReference(int& a,int& b) {
    return (a == b);
}

int main() {
    int x , y ;
    cout<<"donner les valeurs de x et y ";
    cin>>x>>y;
    if (estEgalParValeur(x, y)) {
      cout << "Les entiers sont égaux (passage par valeur)"<<endl;
    } else {
        cout << "Les entiers ne sont pas égaux (passage par valeur)"<<endl;
    }
    if (estEgalParAdresse(&x, &y)) {
      cout << "Les entiers sont égaux (passage par adresse)"<<endl;
    } else {
      cout << "Les entiers ne sont pas égaux (passage par adresse)"<<endl;
    }
    if (estEgalParReference(x, y)) {
        std::cout << "Les entiers sont égaux (passage par référence)"<<endl;
    } else {
        std::cout << "Les entiers ne sont pas égaux (passage par référence)"<<endl;
    }

    return 0;
}

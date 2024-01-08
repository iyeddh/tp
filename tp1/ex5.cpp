#include <iostream>
using namespace std;
void echangeParValeur(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void echangeParReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void echangeParPointeur(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    cout<<"echange par valeur";
    cin>>a>>b;
    echangeParValeur(a, b);
    cout << "Après échange par valeur : a = " << a << ", b = " << b <<endl;
    cout<<"echange par referance";
    cin>>a>>b;
    echangeParReference(a, b);
    cout << "Après échange par référence : a = " << a << ", b = " << b <<endl;
    cout<<"echange par pointeur";
    cin>>a>>b;
    echangeParPointeur(&a, &b);
    cout << "Après échange par pointeur : a = " << a << ", b = " << b <<endl;

    return 0;
}

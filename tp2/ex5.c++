#include <iostream>
#include <random>
using namespace std;
double genererReelAleatoire(double min, double max) {
    random_device rd;
    mt19937 gen(rd());
  uniform_real_distribution<double> dis(min, max);
    return dis(gen);
}
int genererEntierAleatoire(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(min, max);
    return dis(gen);
}

int main() {
    cout << "Nombres réels aléatoires entre 0.0 et 1.0 :"<<endl;
    for (int i = 0; i < 5; ++i) {
        double nombreReel = genererReelAleatoire(0.0, 1.0);
        std::cout << nombreReel << "||";
    }
    cout <<endl<< "Nombres entiers aléatoires entre 1 et 10 :"<<endl;
    for (int i = 0; i < 5; ++i) {
        int nombreEntier = genererEntierAleatoire(1, 10);
        cout << nombreEntier << "||";
    }
    return 0;
}

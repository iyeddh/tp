#include<iostream>
#include<string>
using namespace std;
int main(){
  string type;
  cout<<"choisir le type du distance taper km pour km et taper mi pour mile "<<endl;
  getline(cin,type);
  double distance_km, distance_mile;
  while (type != "km" && type != "mi") {
        getline(cin, type);
  }
  
  if (type == "km") {
        cout << "Donner la distance en kilomètres : ";
        cin >> distance_km;
        distance_mile = distance_km / 1.609;
    } else if (type == "mi") {
        cout << "Donner la distance en miles : ";
        cin >> distance_mile;
        distance_km = distance_mile * 1.609;
    }
  cout<<"distance en km : "<<distance_km<<endl;
  cout<<"distance en mile : "<<distance_mile<<endl;
}
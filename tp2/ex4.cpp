#include<iostream>
using namespace std;
int main(){
  int operation;
  double x,y ;
  while (true)
  {
    system("cls");
    cout<<"Operation? ";
    cin>>operation;
    if(operation != 5){
      switch (operation)
    {
    case 1:
      cout<<"donner le premier nombre "<<endl;
      cin>>x;
      cout<<"donner le deuxieme nombre "<<endl;
      cin>>y;
      cout<<x<<" + "<<y<<" = "<<x+y<<endl;
      break;
    case 2:
      cout<<"donner le premier nombre "<<endl;
      cin>>x;
      cout<<"donner le deuxieme nombre "<<endl;
      cin>>y;
      cout<<x<<" + "<<y<<" = "<<x*y<<endl;
      break;
    case 3:
      cout<<"donner le premier nombre "<<endl;
      cin>>x;
      cout<<"donner le deuxieme nombre "<<endl;
      cin>>y;
      cout<<x<<" + "<<y<<" = "<<x-y<<endl;
      break;
      case 4:
      cout<<"donner le premier nombre "<<endl;
      cin>>x;
      cout<<"donner le deuxieme nombre "<<endl;
      cin>>y;
      if (y==0){
        cout<<"EREUR tu ne peut pas diviser par 0"<<endl;
      }
      else{
        cout<<x<<" + "<<y<<" = "<<x/y<<endl;
      }
      
      break;
    default:
      cout<<"donner une operation valable";
      break;
    }
    }else{
      break;
    }
  }
  
}
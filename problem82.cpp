//Scope resolution operator.
#include<iostream>
#include<conio.h>
using namespace std;
int x=20;//global variable.

int main(){
  int x=10;//local variable.
  ::x=30;//global variable.
  cout<<::x<<endl;//:: this is called scope resolution operator.

  getch();


}

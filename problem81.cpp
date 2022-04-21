//passing arguments.
//passing by value=In case of pass by value, a copy of the argument is passed to the function.
//pass by reference=In case of pass by reference,copies an argument address into the formal parameter.
#include<iostream>
#include<conio.h>
using namespace std;

void display(int num)//if you put *num then you will get pass reference
{

	num=20;
}

int main(){

int x=10;
cout<<"Before calling the function x="<<x<<endl;

display(x);//if you put &x you will be getting pass by reference.

cout<<"After calling the function x="<<x<<endl;

getch();

}

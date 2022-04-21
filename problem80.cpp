//Recursion.Using recursion we get the value of factorial.
//Recursion is a process where it call itself.To stop calling we need a base case.
#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n){

 if(n==1){
	return 1;
 }
 else{
	return n*fact(n-1);
 }
}
int main(){

  int factorial=fact(4);
  cout<<factorial;
  getch();


 }


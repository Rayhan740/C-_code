//1D array.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

  int i,ara[5];
  cout<<"Enter the value: "<<endl;

  for(i=0;i<=4;i++){
	cout<<"Roll number "<<i+1<<" =";
	cin>>ara[i];
  }
  cout<<"marks are: "<<endl;
  for(i=0;i<=4;i++){

	cout<<ara[i]<<endl;
}

getch();

}

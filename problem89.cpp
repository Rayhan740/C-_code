//Separate file for classes.
#include<iostream>
#include<conio.h>
using namespace std;

class student{
   public:
   	int ID;
   	double CGPA;

   	void display(){

   	cout<<ID<<" "<<CGPA;

   	}

   	student(int x,double y){

   	ID=x;
   	CGPA=y;

   	}



};

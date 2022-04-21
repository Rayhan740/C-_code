//OOP=object oriented programming.(class,object,inheritance,Encapsulation,polymorphism,Abstraction)
//class= A class is a template from which individual object can be created.
//Object=Any class type variable is called object.
#include<iostream>
#include<conio.h>
using namespace std;

class student{
    public:
  	int ID;
  	double CGPA;


};

int main(){

 student Rayhan,Ananta;

 Rayhan.ID=2019338056;
 Rayhan.CGPA=3.88;

 cout<<Rayhan.ID<<"  "<<Rayhan.CGPA<<endl;


 Ananta.ID=2019338071;
 Ananta.CGPA=3.77;

 cout<<Ananta.ID<<"  "<<Ananta.CGPA;




getch();

}

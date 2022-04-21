//constructor. It's an special type of function.
//Constructor has the same name as that of the class it belongs.
//It has no return type.
#include<iostream>
#include<conio.h>
using namespace std;

class student{
    public:
  	int ID;
  	double CGPA;

    void display()
    {
    	 cout<<ID<<"  "<<CGPA<<endl;
    }

    student(int x,double y){

    ID=x;
    CGPA=y;

    }

};

int main(){

 student Rayhan(2019338056,3.88),Ananta(2019338071,3.77);

 Rayhan.display();


 Ananta.display();




getch();

}

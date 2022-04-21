//parametrized function inside the class.
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

    void setvalue(int x,double y){

    ID=x;
    CGPA=y;

    }

};

int main(){

 student Rayhan,Ananta;

 Rayhan.setvalue(2019338056,3.88);
 Rayhan.display();


 Ananta.setvalue(2019338071,3.77);
 Ananta.display();




getch();

}

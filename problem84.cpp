//printing two function with one display.
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

};

int main(){

 student Rayhan,Ananta;

 Rayhan.ID=2019338056;
 Rayhan.CGPA=3.88;

 Rayhan.display();


 Ananta.ID=2019338071;
 Ananta.CGPA=3.77;

 Ananta.display();




getch();

}

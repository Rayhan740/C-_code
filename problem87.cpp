//There are two type of constructor.
//1.Default constructor(who doesn't have parameter.)  2.parametrized constructor(It's contains parameter.).

#include<iostream>
#include<conio.h>
using namespace std;

class student{
	public:
    int ID;
    double CGPA;

    void display(){
      cout<<ID<<" "<<CGPA<<endl;
    }
    student(int x,double y){
       ID=x;
       CGPA=y;

    }

    student(){

    cout<<"Default constructor"<<endl;

    }


};

int main(){
   student ob;
   student Rayhan(2019338056,3.88),Ananta(2019338071,3.77);

  Rayhan.display();
  Ananta.display();


getch();


}


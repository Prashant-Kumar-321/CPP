#include<iostream>
using namespace std;

class Parent
{
    public :
        int a,b;

       void display()
        {
            cout<<"Parent display called"<<endl;
        }
};

class Child : public Parent
{

    public :
        int c , d;

        void display()  // Function overriding
        {
            cout<<"Child Display Called"<<endl;
        }
};

int main()
{
    Parent x;
    Child y;

    //x.display();  // parent display
    //y.display(); // child display

    //Parent *p = &x;
   // p->display();  // parent display

   // Child *c = &y;
   // c->display(); // child display

    Parent *p1 = &y;  //1. parent class pointer can point to child class object
    p1->display();    //2. Function of pointer type will be called

    Child *c1 = &x;  // It is an error Child class pointer cannot point to parent class object
    c1->display(); // error

    return 0;
}

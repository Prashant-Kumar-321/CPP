#include<iostream>
using namespace std;

class A
{
    public :
        int x;

        void print()
        {
            cout<<"A -> print()"<<endl;
        }
};

class B
{
    public :
        int x;

        void print()
        {
            cout<<"B-> Print()"<<endl;
        }
};

class C : public A, public B
{

    public :
        void display()
        {
            cout<<"A::x = "<<A::x<<endl;
            B::print();
        }
};

int main()
{
    C c;

    c.display();
    return 0;
}

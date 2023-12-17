#include<iostream>
using namespace std;

class B
{
    public :
        int x, y;

        B(int a, int b)
        {
            x = a;
            y = b;
        }

};

class A
{
    int x;
    int &y = x;
    B z;

    public:

        A()
        {}

        A(int a, int b, B c) : y(b)
        {
            cout<<"Parameterized constructor called"<<endl;
            x = a;
           // y = b;
            z = c;
        }

        void display()
        {
            cout<<"x = "<<x<<" , y = "<<y<<" , z = "<<z.x + z.y<<endl;
        }
};

int main()
{
    B b(1,2);
    A a(2,-5,b);
    a.display();


    return 0;

}

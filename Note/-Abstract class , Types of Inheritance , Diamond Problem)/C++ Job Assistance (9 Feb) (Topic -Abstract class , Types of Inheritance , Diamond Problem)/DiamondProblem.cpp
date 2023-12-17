#include<iostream>
using namespace std;

class A
{
    public :
        int x;

        A()
        {
            x = 5;
            cout<<"A() called"<<endl;
        }
};

class B : virtual public A
{
    public :
        B()
        {
            cout<<"B() called"<<endl;
        }
};

class C : virtual public A
{
    public :
        C()
        {
            cout<<"C() called"<<endl;
        }
};

class D : public B, public C
{
    public :
        D()
        {
            cout<<"D() called"<<endl;
        }
};

int main()
{
    D d;
    cout<<"D.x = "<<d.x<<endl;

    return 0;
}

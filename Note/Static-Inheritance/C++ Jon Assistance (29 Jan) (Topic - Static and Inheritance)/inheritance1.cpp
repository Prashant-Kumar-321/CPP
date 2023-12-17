#include<iostream>
using namespace std;

class A
{
    private :
        int a;

    public:
        int b;

    void display()
    {
        cout<<"A = "<<a<<" , B = "<<b<<endl;
    }
};

class B : public A
{
    private :
        int c;

    public :
        int d;

        void show()
        {
            cout<<"b = "<<b<<" , c = "<<c<<" , d = "<<d<<endl;
        }
};


int main()
{
    A x;
   // x.a = 5;
    x.b = 10;

    x.display();


    B y;
    //y.a = 5;
    y.b = 10;
   // y.c = 15;
    y.d = 20;

    y.show();

    return 0;
}

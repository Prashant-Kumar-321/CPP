#include<iostream>
using namespace std;

class A
{
    private :
        int x;

    public:
        int y;

        A()
        {
            x = 5;
            y = 10;
        }

        void display()
        {
            cout<<"x = "<<x<<" , y = "<<y<<endl;
        }
};

class B : public A
{
    public :
        int z;

    B()
    {
        z = 20;
    }

    void show()
    {
        cout<<"y = "<<y<<" , z = "<<z<<endl;
    }
};

int main()
{
    A a;
    a.display();

    B b;
    b.show();

    return 0;
}

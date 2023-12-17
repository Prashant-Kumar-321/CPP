#include<iostream>
using namespace std;

class V1  // Parent class
{
    private:
        int a;

    public:
        int b;

    V1(int x, int y)
    {
        cout<<"Parent constructor called"<<endl;
        a = x;
        b = y;
    }

    ~V1()
    {
        cout<<"Parent Destructor called"<<endl;
    }

    void display()
    {
        cout<<"a = "<<a<<" , b = "<<b<<endl;
    }
};

class V2 : public V1 // Child Class
{

    private :
        int c;

    public :
        int d;

        V2(int x, int y) : V1(1,2)
        {
            cout<<"Child constructor called"<<endl;
            c = x;
            d = y;
        }

        ~V2()
        {
            cout<<"Child Destructor called"<<endl;
        }

        void print()
        {
            cout<<"b = "<<b<<" , c = "<<c<<" , d = "<<d<<endl;
        }
};

int main()
{

    V2 y(5,6);
    y.print();


    return 0;
}

#include<iostream>
using namespace std;
class Dollar
{
    public :

        int d;

        Dollar()
        {
            cout<<"Dollar DC called"<<endl;
        }

        Dollar(int x)
        {
            cout<<"Dollar PC called"<<endl;
            d = x;
        }

        void display()
        {
            cout<<"Dollar = "<<d<<endl;
        }

        operator int()
        {
            cout<<"Dollar class int() called"<<endl;
            return d;
        }
};

class Rupee
{
    public :

        int r;

        Rupee(Dollar y)
        {
            cout<<"Rupee(Dollar) PC called"<<endl;
            r = y.d;
        }

        operator Dollar()
        {
            cout<<"Rupee class Dollar() called"<<endl;
            Dollar a = r;  // Dollar(int) PC called
            return a;
        }

        Rupee()
        {
            cout<<"Rupee DC called"<<endl;
        }

        Rupee(int x)
        {
            cout<<"Rupee PC called"<<endl;
            r = x;
        }

        void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }


        operator int()  // final conversion is rupee to int
        {
           cout<<"Rupee class int() called"<<endl;
           return r;
        }

};


int main()
{
    Rupee a = 5;  //Rupee(int)
    a.display();

    int x = a;   // compiler will search for a.int()
    cout<<"x = "<<x<<endl;


    Dollar b = 10;
    b.display();

    int y = b;
    cout<<" y = "<<y<<endl;

    Rupee c = b;  // choice 1 = PC Rupee(Dollar)  , Choice 2 = Dollar class -> operator Rupee()
    c.display();

    Dollar d = c;  // Dollar(Rupee)
    d.display();

    return 0;
}

#include<iostream>
using namespace std;

class ABC
{
    public :
    int x,y;

    ABC()
    {
        cout<<"Default Constructor called"<<endl;
    }

    ABC(int a , int b)
    {
        cout<<"Parameter contructor called"<<endl;
        x = a;
        y = b;
    }

    ABC(const ABC &p)  // Constant reference
    {
        cout<<"Copy Constructor called"<<endl;
        x = p.x;
        y = p.y;
    }

    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

int main()
{
    ABC a(2,6);
    ABC b = a;

    a.display();
    b.display();

    return 0;
}

#include<iostream>
using namespace std;

class ABC
{
    int x;

public :
    ABC(int a)
    {
        x = a;
    }
    int getX()
    {
        return x;
    }
};

class IList
{
    int x;
    int y;
    int &z;
    ABC a1;

public:

    IList(int x,int y):x(x),y(y),z(x),a1(5)
    {

    }

    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<" a1 = "<<a1.getX()<<endl;
    }
};

int main()
{
    IList l1(3,4);
    IList l2(3,10);

    l1.display();

    return 0;
}

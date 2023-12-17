#include<iostream>
using namespace std;

class Addition
{
    public :
        int x,y;

        Addition(int a = 0, int b = 0) // Default argument 0 , 1 ,2
        {
            x = a;
            y = b;
            cout<<"Paramerized constructor called"<<endl;
        }

        int add()
        {
            return x + y;
        }
};

int main()
{

    Addition * p = new Addition(5,10);
    // Addition c = Addition(4);
    // Addition c(4);
    Addition c = 4;

    Addition d = 2, e;

    int z = (*p).add();
    cout<<"Addition of "<<(*p).x << " and "<<(*p).y << " is "<<z<<endl;

    z = c.add();
    cout<<"Addition of "<<c.x << " and "<<c.y << " is "<<z<<endl;

    z = d.add();
    cout<<"Addition of "<<d.x << " and "<<d.y << " is "<<z<<endl;

    return 0;
}

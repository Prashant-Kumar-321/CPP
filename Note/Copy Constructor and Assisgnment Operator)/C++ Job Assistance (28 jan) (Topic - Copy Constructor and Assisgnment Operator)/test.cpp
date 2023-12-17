#include<iostream>
using namespace std;

class Test
{
    public :

        Test(const Test &t)
        {
            cout<<"Copy Constructor Called"<<endl;
        }

        Test()
        {
            cout<<"Default Constructor Called"<<endl;
        }

};

Test fun()
{
    cout<<"Function called"<<endl;
    Test t; // Default Constructor
    return t;
}

int main()
{
    Test t1;  // Default constructor
    Test t2 = fun();

    return 0;
}

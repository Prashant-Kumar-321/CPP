#include<iostream>
using namespace std;

// count the number of objects created for your class

class A
{
    public:
       static int x;
       int y;

    void display()
    {
        static int z;
        cout<<x<<y;
    }

    static void show() // Static function can access only static variables.
    {
        cout<<x<<" "<<endl;
    }

};
int A::x = 10;  // It is neccessary and very very important

int main()  // Non Static fucntion --> it can access both static and non static
{
    A::show();



    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

class ABC
{
    public :
        int x , y;
         char *s;

        ABC()
        {}

        ABC(int a, int b , char *s1)
        {
            x = a;
            y = b;
            s = s1;
        }

        // Deep copy and Shallow copy

    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" s = "<<s<<endl;
    }
};


int main()
{
    ABC a(2,3, "prateek");
    ABC b = a;

    a.s = "Jain";

    a.display();
    b.display();

    return 0;
}

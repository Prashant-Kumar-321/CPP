#include<iostream>
using namespace std;

class Addition
{
    public:

        int x, y;

        Addition(int a = 0, int b = 0)
        {
            cout<<"Constructor called"<<endl;
            x = a;
            y = b;
        }

        int add()
        {
            return x+y;
        }
};

int main()
{

    Addition a[5] = { Addition(3) , Addition(4,5) , Addition(6)};

    for(int i = 0 ; i< 5 ; i++)
    {
        cout<<" x = "<<a[i].x<<" y = "<<a[i].y<<endl;
    }

    return 0;
}

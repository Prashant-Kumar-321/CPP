#include<iostream>
using namespace std;

class Addition
{
    public:

        int x, y;

        Addition(int a, int b)
        {
            x = a;
            y = b;
        }

        int add() const
        {
            return x+y;
        }
};

int main()
{

    const Addition a(5,6);

    int z = a.add();

    cout<<z;

    return 0;
}

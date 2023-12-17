#include<iostream>
using namespace std;

class ABC
{
    int x , y;

    public:

        ABC()
        {

        }

        ABC(int a , int b)
        {
            x = a;
            y = b;
        }

        void print()
        {
            cout<<"x = "<<x<<" , y = "<<y<<endl;
        }
        friend ABC add(ABC a , ABC b);
};

        ABC add(ABC a , ABC b)
        {
            ABC temp;
            temp.x = a.x + b.x;
            temp.y = a.y + b.y;

            return temp;
        }

int main()
{
    ABC a(2,5),b(10, 9),c;

    c = add(a,b);

    c.print();

    return 0;
}

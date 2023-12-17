#include<iostream>
using namespace std;

class Addition
{
    int x, y;

    public :

        Addition()
        {
            cout<<"Default Constructor called"<<endl;
        }

        ~Addition()
        {
            cout<<"Destructor called"<<endl;
        }

        void setX(int a)
        {
            if(a<0)
                x = -a;
            else
                x = a;
        }

        void setY(int b)
        {
            y = b;
        }

        int getX()
        {
            return x;
        }

        int getY()
        {
            return y;
        }
};

int main()
{
    Addition a,b;
    Addition *c = new Addition();  // new ==> delete

    a.setX(-23);
    a.setY(24);

    cout<<a.getX() + a.getY()<<endl;

    delete c;

    return 0;
}

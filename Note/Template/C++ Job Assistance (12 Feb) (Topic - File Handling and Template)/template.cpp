#include<iostream>
using namespace std;

template<class T1 , class T2 = int , class T3 = float>
class Addition
{
    public :

        T3 add(T1 a, T2 b , T1 c = 0)
        {
            return (a+b+c);
        }

        T3 sub(T1 a, T2 b)
        {
            return (a-b);
        }
};

int main()
{
    Addition <float>a;
    Addition <char, int , char> b;

    float x = a.add(3.5,5.6);
    char y = b.add('a',3);

    cout<<"\nAddition Result = "<<x<<endl;
    cout<<"\nResult = "<<y<<endl;

    return 0;
}

#include<iostream>
using namespace std;

class Swapping
{

    public:
        template<class T>
        void swap(T a , T b)
        {
            T temp = a;
                a = b;
                b = temp;

                cout<<"a = "<<a<<" , b = "<<b<<endl;
        }
};

int main()
{
    Swapping s;

    s.swap<int>(5,6);
    s.swap<char>('P', 'J');

    return 0;
}

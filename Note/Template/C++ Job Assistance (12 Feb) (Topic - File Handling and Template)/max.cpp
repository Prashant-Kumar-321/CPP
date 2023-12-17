#include<iostream>
using namespace std;

class Maximum
{
    public :

        template<class T = int>      //void swap using template
        T maxx(T a , T b)
        {
            return a>b ? a : b;
        }
};

int main()
{
    Maximum m;
    cout<<"Maximum  = "<<m.maxx<>(2,5)<<endl;
    return 0;
}

#include<iostream>
using namespace std;

namespace A
{
    int x;

    namespace B
    {
        int y;
    }
}

using namespace A;
using namespace B;
int main()
{
    cout<<x;
    cout<<B::y;
    cout<<y;

    return 0;
}

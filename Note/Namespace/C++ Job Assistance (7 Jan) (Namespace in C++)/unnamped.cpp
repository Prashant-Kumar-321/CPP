#include<iostream>

using namespace std;

namespace
{
    int x = 5;
}

int main()
{
    cout<<::x;

    return 0;
}

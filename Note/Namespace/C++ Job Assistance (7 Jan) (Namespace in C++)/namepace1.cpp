#include<iostream>
using namespace std;

namespace A
{
    int x;   // Namespace variable
    int y;
}
namespace A
{
    int y;
    int z;
}

using namespace A;
int main(void)
{

    cout<<y; //namespace

    return 0;
}

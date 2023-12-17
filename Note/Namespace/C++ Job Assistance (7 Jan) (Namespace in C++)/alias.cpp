#include<iostream>

using namespace std;

namespace prateek_jain
{
    int x = 5;

    namespace xyz
    {
        int y = 10;
    }
}

namespace pj = prateek_jain::xyz;

int main()
{
    cout<<pj::y;

    return 0;
}

#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    int a[] =  {2,5,2,6,3,1,9};
    unordered_multiset <int> s = {2,5,2,6,3,1,9};

    unordered_multiset <int>::iterator x;

    for(x = s.begin(); x != s.end() ; x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}

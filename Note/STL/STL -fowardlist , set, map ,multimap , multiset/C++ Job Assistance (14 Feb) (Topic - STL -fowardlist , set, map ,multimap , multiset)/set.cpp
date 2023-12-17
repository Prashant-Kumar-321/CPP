#include<iostream>
#include<set>

using namespace std;

int main()
{
    multiset <int , greater<int>> s = {2,3,5,6};

    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(1);
    s.insert(4);

    s.erase(1);

    cout<<"Size = "<<s.size()<<endl;

    auto y = s.find(20);

    if(y == s.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }

    multiset<int>:: iterator x;

    for(x = s.begin(); x != s.end() ; x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}

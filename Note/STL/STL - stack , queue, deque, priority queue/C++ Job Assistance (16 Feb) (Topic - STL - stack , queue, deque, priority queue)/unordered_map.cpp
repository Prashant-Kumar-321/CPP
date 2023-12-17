#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_multimap <string , int> m({{"prateek" , 24}, {"Raza" , 20}, {"yash",21}, {"vishu",22}});

    m.insert({"kajal", 25});

    unordered_multimap<string , int> :: iterator x;

    for(x = m.begin() ; x != m.end() ; x++)
    {
        cout<<"Key = "<<x->first<<" , value = "<<x->second<<endl;
    }

    return 0;
}

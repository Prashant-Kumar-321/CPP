#include<iostream>
#include<map>

using namespace std;

int main()
{
    int a[] = {2,1,1,3,4,2,5,2,6,4,3,9}; // 1-2, 2-3 , 3-2,4-2,5-1,6-1,9-1

    map <int,int> m;

    for(int i=0 ; i<= 11 ; i++)
    {
        if(m.find(a[i]) != m.end()) // key present in map
        {
            m[a[i]]++;
        }
        else
        {
            m[a[i]] = 1;
        }
    }
    map<int, int >::iterator x;
    for(x = m.begin() ; x != m.end() ; x++)
    {
        cout<<"Number = "<<x->first<<" , Frequency = "<<x->second<<endl;
    }

    return 0;
}

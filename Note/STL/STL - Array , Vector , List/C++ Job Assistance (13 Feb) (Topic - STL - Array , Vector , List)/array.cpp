#include<iostream>
#include<array>

using namespace std;

int main()
{
    // int a[20] = {1,2,3,4,5};
    array <int,10> a = {1,2,3,4,5,6,7,8,9,10};
    array <int,10> b = {11,12,13,14,15,16,17,18,19,20};

    for(int i = 0 ; i < a.size() ; i++)
    {
        //cout<<a[i]<<" ";
        cout<<a.at(i)<<" ";
    }
    cout<<endl;

    cout<<get<2>(a)<<" "<<endl;
    cout<<"Front = "<<a.front()<<endl;
    cout<<"Back = "<<a.back()<<endl;

    a.swap(b);

    for(int i = 0 ; i< a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i< a.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}

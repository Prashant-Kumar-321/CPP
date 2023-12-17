#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> a;

    cout<<"Size = "<<a.size()<<endl;
    cout<<"Capacity = "<<a.capacity()<<endl;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    a.insert(a.begin(), 5);
    a.insert(a.begin(),10);

    int n;
    cout<<"Enter 5 elements"<<endl;
    for(int i = 0 ; i< 5; i++)
    {
        cin>>n;
        a.push_back(n);
    }
  //  a.clear();


  //  for(int i = 0; i < a.size() ; i++)
 //   {
 //   cout<<a[i]<<" ";
 //   }

   // vector<int>::iterator x;

    for(auto y = a.begin() ; y != a.end() ; y = y + 2)
    {
        cout<<*y<<" ";
    }

    cout<<endl<<"Another way to print"<<endl;

    for(int i :  a)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Size = "<<a.size()<<endl;
    cout<<"Capacity = "<<a.capacity()<<endl;




    return 0;
}

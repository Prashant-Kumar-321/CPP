#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s1,s2;

    s1.push(10);
    s1.push(20);
    s2.push(30);
    s2.push(40);

    s1.swap(s2);

    while(! s1.empty())
    {
        cout<<s1.top()<<endl;

        s1.pop();
    }

   while(! s2.empty())
    {
        cout<<s2.top()<<endl;

        s2.pop();
    }
    return 0;
}

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int ,vector<int> ,greater<int> > q;

    q.push(2);
    q.push(3);
    q.push(1);
    q.push(4);
    q.push(4);

    while(! q.empty())
    {
        cout<<q.top()<<endl;

        q.pop();
    }

    return 0;
}

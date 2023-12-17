#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l1; //doubly linked list 

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_front(5);
    l1.push_back(2);

    // 5->4->1->2->3

    list<int>::iterator x = l1.end();
    advance(x,-2);

    l1.insert(x,10);

    //l1.pop_front();

   // l1.pop_back();

   // l1.reverse();

   l1.remove(2);

   l1.sort();
   l1.reverse();

    for(x = l1.begin() ; x != l1.end() ; x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}

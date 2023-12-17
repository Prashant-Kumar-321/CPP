#include <iostream>
#include <list>
using namespace std;

void display(list<int> li)
{
  for (int x : li)
    cout << x << " ";

  cout << endl;
}

// Driver Code
int main(void)
{
  list<int>li = {1,2,3,4,5,6,7,8,9}; 
  // Intializing list like array
  list<int> li1{4, 8, 16, 12, 88, 44, 124, 116};
  list<int> li2{2, 8, 16, 14};

  display(li1);
  display(li2);

  li1.swap(li2); // swapping data of two list 
  display(li1);
  display(li2);
  
  return 0;
}
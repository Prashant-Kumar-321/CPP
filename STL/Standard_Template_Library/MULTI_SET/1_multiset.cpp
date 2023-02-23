#include <iostream>
#include <set>
using namespace std;

int main()
{
  int arr[] = {1, 11, 111, 1111};

  multiset<int> m(arr, arr + 5); // min-heap// Ascending order

  // inseting element in multiset using
  // insert function
  // return iterator of inserted element
  m.insert(9);
  m.insert(9);
  m.insert(2);
  m.insert(4);
  // m.insert(-4);
  m.insert(4);
  m.insert({4, 9, 0, 18});
  m.insert(10);

  if (m.find(10) != m.end())
    cout << "Element is present ";
  else
    cout << "Element is not present ";

  cout << endl;
  multiset<int>::iterator x = m.begin();

  cout<<"4 --> count = "<< m.count(4);// it will return no of element of 4 (key); 
  m.erase(9); // erase all element equal to 9; 
  // m.clear();  // Erase all element in multiset 

  // displaying
  for (x = m.begin(); x != m.end(); x++)
    cout << *x << " ";
  cout << endl;

  cout<< "size of m = "<< m.size()<< endl; 
  m.swap(m); // swap the data of two multiset
  return 0;
}
#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
  multimap<int, char> m;

  // inserting element in multimap using [insert() function]
  m.insert({{1, 'E'}, {2, 'B'}, {3, 'C'}, {4, 'D'}});
  m.insert({1, 'A'});

  pair<int, char> p[5] = {{5, 'F'}, {6, 'G'}, {7, 'H'}, {8, 'I'}, {5, 'J'}}; // intialize pair array;

  // inserting element in mulitmap with pair
  m.insert(pair<int, char>(11, 'x'));
  m.insert(pair<int, char>(11, 'y'));

  m.insert(p[0]);
  m.insert(p, (p + 5));

  // displaying element
  multimap<int, char>::iterator x = m.begin();
  cout << (*x).first << x->second << endl;
  advance(x, 1);
  cout << (*x).first << x->second << endl;

  for (x = m.begin(); x != m.end(); x++)
  {
    cout << x->first << x->second << " ";
  }
  cout << endl;

  // erase all values associated with key = 11
  m.erase(11);
  cout << "After deleting values of 11 key" << endl;
  for (x = m.begin(); x != m.end(); x++)
  {
    cout << x->first << x->second << " ";
  }
  cout << endl;
  int size = m.size(); // return size of multimap
  cout << "Size of multimap\nTotal no of pairs in multimap = " << size << endl;

  int value = m.count(1);// cout of values associated with key 1; 
  cout << endl<< "Vlaues associated with key 1 = " << value << endl;

  auto iter = m.find(1);
  if (iter != m.end())
  {
    cout << "All values associated with key 1" << endl;
    while (value--)
    {
      cout << iter->second << "  ";
      iter++;
    }
  }

  return 0;
}
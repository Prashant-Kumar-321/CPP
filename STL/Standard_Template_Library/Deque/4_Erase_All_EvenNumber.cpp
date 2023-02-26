#include <bits/stdc++.h>
using namespace std;

void print_dq(const deque<int> &a)
{
  int i;
  for (i = 0; i < a.size(); i++)
    cout << a[i] << " ";

  cout << endl;
}
void Erase_EvenNUM(deque<int> &a)
{
  deque<int>::iterator it = a.begin();

  for (it; it != a.end(); it++)
    if ((*it & 1) == 0) 
    {
      a.erase(it); 
      it--; 
    }
  
 
}

// Driver code
int main()
{
  deque<int> d{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  print_dq(d);
  Erase_EvenNUM(d); // function call to erase all even number
  cout << "After erasing all even number " << endl;
  print_dq(d);

  return 0;
}
#include <iostream>
#include <list>

using namespace std;

// Driver function
int main()
{
  list<int> li(4);
  li.push_back(10);
  li.push_back(30);
  li.push_back(28);

  li.push_front(11);
  li.push_front(1);
  li.push_back(45);

  li.insert(li.begin(), 111); // li.push_front(111);
  li.insert(li.end(), 67);    // li.push_back(67)

  // 111->1->11->60->10->30->28->45->67
  //  They will get non-contigious memory

  list<int>::iterator lt = li.end();
  advance(lt, -1); // backward shifting of itr
  li.insert(lt, 60);

  // new list ---> 111->1->11->10->30->28->45->60->67;

  for (lt = li.begin(); lt != li.end(); lt++)
  {
    cout << *lt << " ";
  }
  cout << endl;

  // Reversing list
  li.reverse();

  for (int x : li)
    cout << x << " ";

  cout<<endl; 
  li.sort();// sort element in ascending order
  li.reverse(); // sorted element in descending order 

  for (int x : li)
    cout << x << " ";
  cout<<endl; 

  // list 111->67->60->45->30->28->11->10->1 
  li.pop_back() ; //  Remove last element
  li.pop_front(); // Remove fist element 
  li.remove(30);  // Remove all element in list equal to 30 
  for(int x: li)
    cout<<x<< " "; 
  
  cout<<endl; 


  cin.get(); 
  return 0;
}
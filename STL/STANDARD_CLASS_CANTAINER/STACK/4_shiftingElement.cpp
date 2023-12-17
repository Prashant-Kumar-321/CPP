#include <iostream>
#include <stack>

using namespace std;

void transfer(stack<int>, stack<int> &);
void getStack(stack<int>);
bool deletElem(stack<int> &, int); // delete element from stack 

// Driver code
int main(void)
{
  stack<int> s, fs; // s ==> stack, fs ===> friend stack

  s.push(9);
  s.push(11);
  s.push(22);
  s.push(17);
  s.push(23);

  stack<int> s1 = s; 

  transfer(s, fs);

  getStack(s);
  cout << endl;

  getStack(fs);
  cout<<endl; 

  getStack(s1); 

  if(deletElem(s, 17))
    cout<< "Deletion has been done successfully"<< endl; 
  else 
    cout<< "Deletion noto occured "<< endl; 

  getStack(s); 

  return 0;
}

// function definition
void transfer(stack<int> s, stack<int> &s1)
{
  while (!s.empty())
  {
    s1.push(s.top());

    s.pop();
  }
}
void getStack(stack<int> s)
{
  while (!s.empty())
  {
    cout << s.top() << endl;

    s.pop();
  }
}

bool deletElem(stack<int> &s, int num)
{
  stack<int> temp;
  bool flag = 0;  
  while(!s.empty())
  {
    if(s.top() == num)
    {
      s.pop();
      flag = true; // element found and delete  
      break; 
    }
    else 
    {
      temp.push(s.top()); 
      s.pop(); 
    }
  }

 // restoring data of stck 
 while(!temp.empty())
 {
  s.push(temp.top()); 
  temp.pop(); 
 }


 return flag; 
}
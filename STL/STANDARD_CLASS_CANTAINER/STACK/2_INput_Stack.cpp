#include<iostream>
#include<stack>
using namespace std; 

// Driver code 
int main(void)
{
  stack< string > stk;

  string ctyName;
  cout<<"Enter 5 city name"<<endl;  
  
  // taking input 
  for(int i=0;i<5;i++)
  {
    getline(cin, ctyName); 
    stk.push(ctyName); 
  }
  cout<<endl<<endl; 

  void displyCityName(stack<string>); 
  displyCityName(stk);

  return 0; 
}

// function definition 
void displyCityName (stack<string> stk)
{
  while(!stk.empty()) 
  {
   cout<< stk.top()<< endl; 

   stk.pop();  // Remove tp element of stack

   if(stk.empty())
    cout<< "Stack has been empty "<<endl; 
   else
    cout<< "Stack has "<< stk.size()<< " Element"<< endl; 
  }

  cout<<"\n"<< "printing has been done "<<endl; 
}
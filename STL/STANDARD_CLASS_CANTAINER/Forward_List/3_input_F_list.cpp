#include<bits/stdc++.h>
using namespace std; 

int main()
{
  forward_list<int> num = {0};
  forward_list<int>::iterator itr_num = num.begin(); 
  int n,temp; 

  cout<<"How many student are there in the class room"<< endl; 
  cin>>n; 

  cout<< "Enter marks of Math of " << n<< " students: "<< endl;  
  for(int i=0; i!=n; i++)
  {
   cin>>temp; 
   itr_num = num.insert_after(itr_num, temp); 
  }

  cout<<endl<<num.front() << endl;  // return  reference of first element 
  num.pop_front(); 
  // num.remove(0); 
  cout<<num.front() << endl;
  
  num.sort(); 
  num.reverse(); 
  cout<< "Marks of students in Decresing order"<<endl;
  
  auto it = num.begin(); 
  *it = *it; 

  for(int x: num)
   cout<< x << " ";

  cout<<endl; 

  return 0; 
}
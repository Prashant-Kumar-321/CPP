#include<bits/stdc++.h>
using namespace std; 

void Input(priority_queue< pair<int,char>, vector< pair<int,char> >, greater<pair<int, char>>> *a)
{
  pair<int, char> p; 
  cout<< "Enter four pair of int and char : "<<endl; 
  for(int i=1; i<5; i++)
  { 
    cin>>p.first>>p.second; 
    a->push(p);
  }
}

void print(priority_queue< pair<int,char>, vector< pair<int,char> >, greater< pair<int, char> >> a)
{
  while(!a.empty())
  {
    cout<<a.top().first<<" "<< a.top().second<<endl; 
    a.pop(); 
  }

  cout<<endl; 
}

// Driver code 
int main()
{
  priority_queue< pair<int,char>, vector< pair<int,char> >, greater< pair<int, char> >> pq; 

  Input(&pq); // take input of four pairs
  print(pq);  // print all pair 

  return 0; 
}
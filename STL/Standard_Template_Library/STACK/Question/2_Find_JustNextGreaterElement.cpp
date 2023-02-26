#include<bits/stdc++.h>
using namespace std; 

vector<int> NGE(vector<int> v)
{
  vector<int> nge(v.size()); 
  stack<int> st; 

  for(int i = 0; i<v.size(); i++)
  {
    while(!st.empty() && v[i] > v[st.top()])
    {
      nge[st.top()] = i; 
      st.pop(); 
    }
    st.push(i); 
  }

  while(!st.empty()) // element remain in stack 
  {
    nge[st.top()] = -1; 

    st.pop(); 
  }

  return nge; 
}

// Driver function 
int main()
{
  int n; 
  cout<<"Number of element want to store: "; 
  cin>>n; 

  vector <int> V(n);
  cout<<"Enter "<<n<< " element : "; 
  for(int i=0; i<n; i++)
    cin>>V[i]; 

  vector <int> nge = NGE(V); 

  for(int i=0; i<nge.size(); i++){
    cout<<V[i]<< "  ----> "<< ((nge[i]<0) ? -1 : V[nge[i]])<< "\n";  
  } 

  return 0; 
}
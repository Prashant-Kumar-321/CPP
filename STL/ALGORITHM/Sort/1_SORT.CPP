#include<iostream>
#include<algorithm>

using namespace std; 

void display(array<string,6> a)
{
  for(int i=0; i<a.size(); i++)
    cout<<a[i]<<endl; 
  
  cout<<endl; 
}

int main()
{ 
  int a[] = {9,3,1,5,13,8,2,0,-7}; 
  int n = sizeof(a) / sizeof(a[0]);

  vector<int> v (a, a+n); // intialize vector with array  
  array<string, 6> arr {"You", "Make", "Me", "Happy", "Hello", "Love you"}; 

  vector<pair<int ,char>> vect; 
  vect.push_back({2,'A'}); 
  vect.push_back({9,'B'}); 
  vect.push_back({0,'C'}); 


  display(arr); 
  // sorting array using inbuilt sort function 

  sort(a+2,a+n); 
  sort(v.begin()+1, v.begin()+4); 
  sort(&arr[4], &arr[6]); 
  display(arr); 

  sort(vect.begin(), vect.end()); // sorting on the basis of key (first value ) of pair 
  reverse(vect.begin(), vect.end()); // reverse vector 

  for(int i=0; i<vect.size(); i++)
    cout<<vect[i].first<<" "<< vect[i].second<<endl; 
  
  cout<<endl; 

  return 0; 
}
// #include<bits/stdc++.h> //A Non-Standard Header File this will include every header file available in c++
//                         //After including it No need to include any header file in the program 

#include<iostream>
#include<vector>
 
using namespace std; 

// display function prototype
void display(vector<int> &v)
{
  for(int i=0; i<v.size(); i++)
    cout<< v[i]<< " "; 

  cout<< endl; 
}

int main(void)
{
  vector<int> v1{8,9,10}; 
  vector<int> v2{1,2,3,4,5,6}; 
   

  v1.swap(v2); // swap()---> Exchange Elements of v1 with v2 vector

  cout<< "Elements of V1 vector ===> "<< endl; 
  display(v1); 
  cout<< "Elements of V2 vector ===> "<< endl; 
  display(v2);

  v1 = v2; 
  cout<< "Element of V1 Vector "<< endl; 
  display(v1);

  v1.clear(); 
  v1.push_back(49); 
  v1.insert(v1.end(),10);
  v1.push_back(40);   

  v2.clear();   
  v2.push_back(45); 

  if(v1 > v2)
  {
    cout<<"\n \rVector v1 and Vector v2 are equal "<< endl ; 
  }
  else 
    cout<< "\nVector v1 and Vector v2 are not equal "<< endl;

  
  cout<<v1.size()<< endl;  
  cout<< "v1[0] = "<<v1[0]<< endl; 
  display(v1);  

  return 0; 
} 

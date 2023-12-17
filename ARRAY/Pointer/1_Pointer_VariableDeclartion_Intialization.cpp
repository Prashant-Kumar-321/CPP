#include<iostream>
using namespace std; 

// function overloading
void swap(int*a,  int*b){
  int temp = *a; 
  *a = *b; 
  *b = temp; 
}
void swap(int &x, int &y){
  int temp = x; 
  x = y; 
  y = temp; 
}

// Driver function 
int main()
{ 
  int x, y; 
  x = 10, y = 20; 
  // swap(&x, &y); // call by address 
  swap(x,y); // call by reference 
  cout<<" x = "<<x<<endl; 
  cout<<" y = "<<y<<endl; 

  int *p = &x; 
  // cout<< sizeof(p)<<endl; // size of p == 8 bytes (unsigned long long) 
  // p = &x; 
  *p = 5; 
  // cout<<" x = "<< x<< endl;
  // cout<<" x = "<< *p<< endl; 
  // cout<<" x = "<< p[0]<< endl;  

  ++*p;// ++(*p); 
  cout<<" x = "<< x<< endl; 

  p = new int[2]; 
  *(p) = 2; // p[0]
  *(p+1) = 3; //p[1]

  // Memory address 
  cout<< p<< endl; 
  cout<< p+1<< endl;

  // int q = *p++; // return value at p[0] address and p will be pointing to next memory location 
  // cout<< *p++ <<endl; // *(p++) ---> p[1]
  // cout<< *p<< endl; // p[1]; 

  // *++p; //*(++p)---> p[1]
  // cout<< *p<< endl; 
  // *--p; // *(--p) ---> p[0]
  // cout<< *p<< endl;


  // int q = ++*p; 
  (*p)++; // *p += 1 --> *p = *p + 1
  cout<< p[0]<< endl;
  cout<<p << endl;  


  return 0; 
}
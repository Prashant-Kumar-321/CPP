#include<bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std; 
// function prototype 
void print_Que(queue<float> ); 
float sum_Que(queue<float> ); 

// Driver code 
int main()
{
  queue<float> Q; // FIFO --> FIRST IN FIRST OUT 

  Q.push(8); 
  Q.push(29.7); 
  Q.push(45.76); 
  Q.push(90.08); 
  Q.emplace(100); 

  cout<< "First element = "<< Q.front()<<endl;
  cout<< "Last element = "<< Q.back()<<endl; 
  cout<< "Size of queue = "<< Q.size()<< endl; 
  
  print_Que(Q); 
  float sum = sum_Que(Q); 

  cout<<"Total sum = "<< sum <<endl; 

  return 0; 
}

// function definition 
void print_Que(queue<float> q){

  while(!q.empty())
  {
    cout<< q.front()<<endl; 

    q.pop(); 
  }
  cout<<endl; 
}

float sum_Que(queue<float> q)
{
  float sum = 0; 
  while(!q.empty())
  {
    sum += q.front(); 

    q.pop(); 
  }

  return sum; 
}


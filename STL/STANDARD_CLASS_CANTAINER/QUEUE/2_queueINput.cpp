#include<iostream>
#include<queue>

using namespace std; 

// diplaying queue 
void printque(queue<float> q)
{
  while(!q.empty())
  {
    cout<< q.front()<< " "; 

    q.pop();
  }
  cout<< endl; 
}

// Driver Function 
int main(void)
{
  queue<float> num; // FIFA==FIFO 
  
  float temp; 
  cout<< "Enter 5 number "<< endl; 
  for(int i=1; i<=5; i++)
  {
    cin>>temp; 

    num.push(temp); 
  }

  printque(num); // print queue 
  
  return 0; 
}
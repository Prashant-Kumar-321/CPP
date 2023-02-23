#include<iostream>
#include<queue>

using namespace std; 

int main(void)
{
  queue<double> num; 

  num.emplace(7); 
  num.emplace(10); 
  num.emplace(11); 
  num.push(9); 
  num.push(3); 

  double sum = 0;
  while(!num.empty())
  {
    sum += num.front(); 

    num.pop(); 
  }

  cout<< "sum = "<< sum<< endl; 

  return 0; 
}
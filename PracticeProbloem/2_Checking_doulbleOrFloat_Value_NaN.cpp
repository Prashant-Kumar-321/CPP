#include<iostream>
#include<cmath>

using namespace std; 

int main()
{
  double x; 
  cout<< "Enter a number"; 
  cin>>x; 

  double sqrtResult = sqrt(x); 
  if(!isnan(sqrtResult)){
    cout<< "Square Root of "<< x<< " = "<< sqrtResult<< endl; 
  }else{
    cout<<"Since "<< x<< " is Negative"<< endl; 
    cout<< "Square Root of "<< x << " is not defined "<< endl;
    cout<< "Its Result is a complex Number"<< endl;  
  }


  return 0; 
}
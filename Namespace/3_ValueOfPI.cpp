#include<iostream>
#include<string>

using namespace std; 
class PI
{
  string Decimal_Value; 
  int n; 
public: 
  PI(){
  }
  PI(int n): n(n){
  }
  ~PI(){
  }

  string PI_value(int a)
  {
    int dec_value = 22/7; //Integer value of PI 

    Decimal_Value = dec_value+48;
    Decimal_Value.push_back('.');  

    int r = 22 % 7 * 10 ; 

    while(a--)
    {
      dec_value = r / 7; 
      Decimal_Value.push_back(dec_value+48);

      r = r % 7 * 10; 
    }
 
    return Decimal_Value; 
  }
}; 

// Driver code 
int main()
{
 PI p1;
 int n = 3; 
 cin>>n;  
 string PI_Value = p1.PI_value(n); 
 cout<<"Approximate value of PI upto 5 decimal place = "<< PI_Value<<endl; 

  return 0; 
}
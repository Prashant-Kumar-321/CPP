/* [  >>   ] ---> Extraction operator */

#include<iostream>
#include<conio.h>
using namespace std;

class Time
{
  private:
         int hour, min; 
  public: 
  Time(int h, int m)
  {
    hour = h; 
    min = m ; 
  }

  Time(){
    hour = 0; 
    min = 0; 
  }

  friend istream& operator>> (istream&is, Time&t)
  {
     cin>> t.hour>>t.min; 
     return cin; 
  }

  friend ostream& operator<< (ostream&os, Time t)
  {
   cout<< "hour   = "<< t.hour<< endl; 
   cout<< "Minute = "<< t.min<< endl; 

   return cout; 
  }

}; 

int main()
{
  Time t1(5,20), t2(9,00), t3(6,30);

  cout<< t1; // displaying the value of t1 time +

  cout<< " Enter time (h m)"<< endl; 
  cin>> t2; // taking time input from user 

  cout<< t2;  // displaying time 
  return 0;
}

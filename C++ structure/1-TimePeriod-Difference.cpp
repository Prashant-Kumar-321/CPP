// computing the time difference of two time period
// Taking time period from user

#include<iostream>
#include<conio.h>
using namespace std;

struct Time
{
  int hour;
  int min;
  int sec;
};

Time computeTime_Difference (Time t1, Time t2)
{
  // comparing t2.sec and t2.min with t1.sec and t1.sec to make sure substraction can be done
  if(t2.sec<t1.sec)
  {
    t2.sec += 60;
    t2.min--;

    if(t2.min< t1.min)
    {
      t2.min += 60;
      t2.hour--;
    }
  }
  else if (t2.min< t1.min)
  {
   t2.min += 60;
   t2.hour--;
  }

  t2.hour -= t1.hour;
  t2.min -= t1.min;
  t2.sec-= t1.sec;

  return t2;
}

// Driver code;

int main(void)
{
  Time t1,t2,differnce;

  cout<< "Enter time in the formate :: hour minute sec \n"<< endl;
  // taking two time period from user
  cout<< "Enter start Time: ";
  cin>> t1.hour>> t1.min>> t1.sec;

  cout<< "Enter stop time: ";
  cin>> t2.hour>> t2.min>> t2.sec;

  differnce = computeTime_Difference (t1,t2);// function call to calculate time difference

  // printing the time difference
  cout<<endl<< "Time Difference \n";
  cout<< differnce.hour<< " Hour  "<< differnce.min<< " Minute  "<< differnce.sec<< " sec"<< endl;

  return 0;
}

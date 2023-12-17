#include<iostream>
#include<conio.h>
using namespace std;

class Time
{
  int hour, min, sec;
public:
  // Constructor
  Time(int h, int m ,int s)
  {
    hour = h;
    min = m ;
    sec = s;
  }
  Time ()
  {     }

  // Member Functions
  //operator overloading
  Time operator+ (Time a); // declaration
  Time operator+ (int a);

  void display()
  {
    cout<<hour <<" Hour "<<min<< " Minute "<<sec << " second"<< endl;
  }

  friend Time operator+ (int a , Time t)
  {
    cout<< "operator+ called"<< endl;

    Time temp;
    int m = t.min + a;

    temp.hour = t.hour + m/60;
    temp.min = m%60; ;
    temp.sec = t.sec;

    return temp;
  }

};

// definition of oveloaded function of operator overlaoding
Time Time::operator+(Time a)
{
  cout<< "operator+Time called "<< endl ;
  Time tem;
  int s = sec + a.sec;
  int m = min + a.min + s/60;

  tem.hour = hour + a.hour + m/60;
  tem.min = m%60;
  tem.sec = s%60;

  return tem;
}

Time Time:: operator+ (int a)
{
  Time tem;
  int m = min + a;

  tem.hour = hour + m/60;
  tem.min = m % 60;
  tem.sec = sec;

  return tem;
}
//////////////////////////////////////

/* Driver code*/
int main()
{
  // creating object of Time class
  Time t1(2,30,45), t2(5,15,20), t3;
  int Int = 30;

  t3 = t1 + t2; // t1.operator+(t2)
  t3.display();

  t2 = t1 + 5;  // t1.operator+(5)
  t2.display();

  t2 =  5+ t1 + t2;  // operator+(5,t1)
  t2.display();


  getch();
  return 0;
}























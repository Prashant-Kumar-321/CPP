#include<iostream>
#include<conio.h>


using namespace std;

class Time {

  int hour, min;

public:
  // Constructor
  Time(int h, int m)//parametrized constructor
  {
    hour = h;
    min = m;
  }
  Time() //default constructor;
  {

  }

  // Member function ;
  Time operator+(Time t)
  {
    Time temp;
    int m = min + t.min;

    temp.hour = hour + t.hour + m / 60;
    temp.min = m % 60;

    return temp;
  }

  Time operator+(int t) // function overloading
  {
    Time temp;
    int m = min + t;

    temp.hour = hour + (m/60) ;
    temp.min = m % 60;

    return temp;
  }

  void printTime()
  {
    cout<< "Hour  : "<< hour<< endl;
    cout<< "Minute: "<< min<< endl;
  }
};


/* Driver Code*/
int main()
{
  Time t1(3,30), t2(7,40),t3(1,45),t4;

   //t1.printTime();
   //t2.printTime();

  //t4 = t1.add(t2).add(t3);
  t4 = t1 + t2 ; // t1.operator+(t2)
  t2 = t1 + 50; // t1.operator+(2)
  //  t3 = 2 + t1;  //Error

  t2.printTime();

  t4.printTime();

  cout<< "\a";
  getch();
  return 0;
}

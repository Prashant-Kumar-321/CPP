#include<iostream>

using namespace std;
class Time
{
 int hour, Min;

 public:

  // setter of Hour and Min function
  void setHour(int a)
  {
    if(a>=0 && a<=24)
       hour = a;
    else
      hour = 0;
  }

  void setMin(int a)
  {
    if(a>=0 && a<=60)
      Min = a;
    else
      Min = 0;
  }


  Time operator-(Time t) // operator overloading
  {
    Time temp;

    if(Min<t.Min)
    {
      Min += 60;
      hour--;
    }

    temp.Min = Min - t.Min;
    temp.hour = hour - t.hour;

    return temp;
  }

  void TimePeriod()
  {
    cout<< "Hour: "<< hour;
    cout<< " Min: "<< Min << endl;
  }

  // Constructor
  Time(int h, int m)
  {
    hour = h;
    Min = m;
  }
  Time(){} // default constructor

};

int main()
{
  Time t[2],t3;
  int h,m;
  char ch;

  for(int i= 0; i<2; i++)
  {
    cout<< "Enter "<< (i+1)<< "time"<< endl;
    cout<< "HH :: MM: ";
    cin>>h>> ch>> ch>>m;
    t[i].setHour(h);
    t[i].setMin(m);

    cout<< "\n";
  }



  t3 = t[1] - t[0];

  cout<< "Time Period : "<< endl;
  t3.TimePeriod();


  return 0;
}

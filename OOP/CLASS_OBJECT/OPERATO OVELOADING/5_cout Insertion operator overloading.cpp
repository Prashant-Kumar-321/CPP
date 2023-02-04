#include<iostream>
#include<conio.h>

using namespace std;

class Time
{
private:
    int hour, Min;
public:
  Time(int h, int m)
  {
    hour = h;
    Min = m;
  }
  Time(){} // default constructor

  friend ostream& operator<< (ostream &os, Time t)
  {
    cout<< t.hour<<" Hour "<< t.Min<< " Minute";
    return os;
  }

  friend istream& operator>> (istream&is, Time&t)
  {
    char ch;
    cin>>t.hour>>ch>>ch>> t.Min;
    return is;
  }



};

int main()
{
    Time t1(5,20), t2(9,00), t3(6,30);

    cout<< "Enter time in give formate"<< endl;
    cout<< "HH:: MM  = ";
    // taking input in object of Time class using cin object
    cin>> t1>> t1;
    // printing the value fo Time class object using cout object
    cout<< t1<< "\t" << t2<< endl;

    return 0;
}

//t1.operator>>(cin)
//t>>cin;

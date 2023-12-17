#include<iostream>
using namespace std;

class Time
{
    int hour, min;

    public:
        Time()
        {

        }
        Time(int h, int m)
        {
            hour = h;
            min = m;
        }

        void display()
        {
            cout<<"Hour = "<<hour<<" Min = "<<min<<endl;
        }

        friend Time operator+(int a, Time t)
        {
            Time temp;
            temp.hour = a + t.hour;
            temp.min = t.min;
            return temp;
        }

        friend ostream& operator<<(ostream &os, Time t)
        {
            os<<"Hour = "<<t.hour<<" Min = "<<t.min<<endl;
            return os;
        }
};



int main()
{
    Time t1(16, 8), t2;

    t2 = 4 + t1; // operator+(int , Time)

    cout<<t2<<t1<<t2<<t1;

    return 0;
}

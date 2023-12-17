#include<iostream>
using namespace std;

class Time
{
    int hour, min;

    public :
        Time(int h , int m)
        {
            hour = h;
            min = m;
        }

        Time()
        {

        }
        Time operator+(Time t)
        {
            Time temp;
            int m = min + t.min;
            temp.hour = hour + t.hour + m/60;
            temp.min = (m) % 60;

            return temp;
        }

        Time operator+(int x)
        {
            Time temp;

            temp.hour = hour + x;
            temp.min = min;

            return temp;
        }

        void printTime()
        {
            cout<<" Hour = "<<hour<<" min = "<<min<<endl;
        }
};

int main()
{
    Time t1(3,30) , t2(6,40) , t3(4,20) , t4;

    t3 = t2 + t1;   // t4 = t1 + t2

    t4 = t1 + 2;   // t4 = t1.operator+(2)

    t4 = 2 + t2; // Will it work ?

    t4.printTime();

    return 0;
}

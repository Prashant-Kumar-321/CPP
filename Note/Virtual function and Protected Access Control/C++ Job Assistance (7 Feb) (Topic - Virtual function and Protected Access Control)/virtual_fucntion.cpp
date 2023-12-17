#include<iostream>
using namespace std;

class Flight
{
    public :

        virtual void Search()
        {
            cout<<"Invalid Search"<<endl;
        }

        virtual void Book()
        {
            cout<<"Invalid Booking"<<endl;
        }
};

class Spicejet : public Flight
{
    public :
        void Search()
        {
            cout<<"Spicejet Searching"<<endl;
        }

        void Book()
        {
            cout<<"Spicejet Booking"<<endl;
        }
};

class Indigo : public Flight
{
    public :
        void Search()
        {
            cout<<"Indigo Searching"<<endl;
        }

        void Book()
        {
            cout<<"Indigo Booking"<<endl;
        }
};


int main()
{
    Flight *f;
    Spicejet s;
    Indigo i;

    f = &s;
    f->Search();
    f->Book();

    f = &i;
    f->Search();
    f->Book();

    return 0;
}

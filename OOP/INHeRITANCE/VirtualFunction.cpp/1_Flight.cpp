#include<iostream>
#include<conio.h>
using namespace std; 

class Flight
{
  public: 
  virtual void Search()
  {
    cout<< "Server is Down"<< endl ; 
  }

  virtual void Book()
  {
    cout<< "Booking cann't be done "; 
    cout<< "404 Error"<< endl; 
  }

}; 

class SpiceJet : public Flight
{
    public: 
      void Search()
      {
        cout<< "Spice jet air Ticket Searched "<< endl; 
      }
      void Book()
      {
        cout<< "Spice jet Ticket booked "<< endl; 
      }
}; 

class AirAsia : public SpiceJet // sub-clasing of Spicejet 
{
    public: 
    virtual void Search() // same as void Search()
     {
      cout<< "Air  Asia air Ticket Searched "<< endl; 
     }
    virtual void Book()
     {
      cout<< "Air Asia Ticket booked "<< endl; 
     }
}; 


class Indigo : public Flight
{
    public: 
      void Search()
      {
        cout<< "Indigo air Ticket Searched "<< endl; 
      }
      void Book()
      {
        cout<< "Indigo Ticket booked "<< endl; 
      }

}; 

// Driver function 
int main()
{
    Flight *f;
    Flight f1;  

    SpiceJet S; 
    f = &S; 
    // f  = &f1; 
    f->Search(); 
    f->Book(); 


    Indigo I; 
    f = &I; 
    f->Search(); 
    f->Book(); 

    SpiceJet*s; // sub-classing of spicejet class 
    AirAsia AA; 
    s = &AA; 
    s->Search(); 
    s->Book(); 

    return 0 ; 
}
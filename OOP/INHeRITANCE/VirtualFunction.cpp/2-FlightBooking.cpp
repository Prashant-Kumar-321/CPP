#include<iostream>
using namespace std; 

class Flight
{
  public:
   virtual ~Flight()
    {
      cout<< "Flight Destructor"<< endl; 
    } 
    virtual void Search()
    {
      cout<< "404 Error Server temporarily Down "<< endl; 
    }
    virtual void Book()
    {
      cout<< "404 Error Booking cann't be done Now"<< endl ; 
    }
}; 

class Indigo : public Flight
{
  public: 
    ~Indigo()
    {
      cout<< "Indigo Destructor called "<< endl; 
    }
    void Search()
    {
      cout<< "Indigo air line searched "<< endl; 
    }
    void Book()
    {
      cout<< "Indigo air ticket Booked "<< endl; 
    }
}; 

class Spicejet : public Flight
{
   public: 
    ~Spicejet()
    {
      cout<< "Spicejet Destructor called "<< endl; 
    }
    void Search()
    {
      cout<< "Spice jet air line searched "<< endl; 
    }
    void Book()
    {
      cout<< "Spice jet air ticket booked "<< endl; 
    }
}; 
class GoAir : public Flight
{
   public:
    ~GoAir()
    {
      cout<< "GoAir Destructor called "<< endl; 
    } 
    void Search()
    {
      cout<< "GoAir air line searched "<< endl; 
    }
    void Book()
    {
      cout<< "GoAir air ticket booked "<< endl; 
    }
}; 

class AirIndia : public Flight
{
   public: 
    ~AirIndia()
    {
      cout<< "Air India Destructor called"<< endl; 
    }
    void Search()
    {
      cout<< "Air India air line searched "<< endl; 
    }
    void Book()
    {
      cout<< "Air India air ticket booked "<< endl; 
    }
};

// Global choice function 
Flight* Choice(int x)
{
  switch(x)
  {
    case 1: 
      return new Indigo();   // return Indigo object 
    case 2: 
      return new Spicejet(); // return Spicejet object
    case 3: 
      return new GoAir();    // return GoAir object
    case 4: 
      return new AirIndia(); // return AirIndia object 
    default: 
      return new Flight();   // return Flight object
  }
}

// Driver Function 
int main(void)
{   
    // Option  
    cout<< "Select Air Line"<< endl; 
    cout<< "1.Indigo"<< endl; 
    cout<< "2.Spicejet"<< endl; 
    cout<< "3.Go Air"<< endl; 
    cout<< "4.Air India "<< endl; 
    // option end 

    int choice; 
    cin>> choice; 

    Flight*f = Choice(choice); 

    f->Search(); 
    f->Book() ; 
   
   
    delete f; 
    return 0; 
}
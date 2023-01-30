#include<iostream>
using namespace std;

class ABC
{
  int x, y;
  public:
    // constructor;
      ABC(int a, int b)
      {
        cout<< "Parametrized constructor "<< endl;
        x = a;
        y = b;
      }
      ABC ()
      {

      }

    ABC(const ABC &P) // copy constructor
    {
      cout<< "copy constructor"<< endl;
      x = P.x;
      y = P.y;
    }
    /*****************************************
    It is used to initialize object with the help to
    previously initialized object
    ******************************************/

    void display()
    {
      cout<< "x = "<< x<< " ,y = "<< y<< endl;
    }

};

// driver code
int main()
{
  ABC a(2,5);// 2 parametrized constructor will be called
  ABC b = a; // copy constructor will be called

  ABC *p = new ABC(29,9);

  a.display();
  b.display();
  p[0].display();

  return 0;
}

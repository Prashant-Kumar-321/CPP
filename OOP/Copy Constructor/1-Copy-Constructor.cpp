#include<iostream>

using namespace std;
class ABC
{
  public:
    int x, y;

    ABC(int a, int b)
    {
     x = a;
     y = b;
    }
    ABC(){}

    void display()
    {
      cout<< "x = "<< x<< " y = "<< y<< endl;
    }

};

// driver code
int main(void)
{
  ABC a(2,8);
  ABC b = a; // copy constructor will be called that will initialize object b;

  a.display();
  b.display();

  return 0;
}

#include<iostream>

using namespace std;
class Addition
{
public:
  int x;

  Addition (int a = 0)
  {
    x = a;
    cout<< "Constructor call "<< endl;
  }

  ~Addition () {
   cout<< "Destructor call "<< endl ;
   }
};

int main()
{
  Addition a;
  Addition b(3);

  cout<< b.x << endl ;

  return 0;
}


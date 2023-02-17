/**********************************************************
 copy consructor, Assignment operator overloading, and
 Deep copy and [shallow copy by default assignment operator
 and default copy constructor/
 ***********************************************************/
#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Mystring
{
private:
  unsigned short size;
  char *str;

public:
  // Constructor definition
  Mystring(const char *s)
  {
    size = strlen(s);

    str = new char[size + 1];
    strcpy(str, s);
  }

  Mystring()
  {
    size = 1;
    str = new char[size];
  }

  ~Mystring() // Destructor definition
  {
    delete[] str;
  }

  // copy constructor;
  Mystring(const Mystring &a)
  {
    size = a.size;
    str = new char[size + 1];

    strcpy(str, a.str);
  }

  // overloading Assignment operator
  Mystring &operator=(const Mystring &a)
  {
    if (this == &a) // LHS == RHS
      return *this;

    delete[] str;
    size = a.size;

    str = new char[size + 1];

    strcpy(str, a.str);

    return *this; // so that nested assignment of object can be done ;
  }

  // friend functions definition so that we can take input from users in our object using cin and print using cout
  /*************************************************************/
  friend istream &operator>>(istream &is, Mystring &a)
  {
    char temp[5000]; // creating temparary char array
    fflush(stdin);
    cin.getline(temp, 5000);
    // cin.get(temp, 2000).get();

    delete[] a.str;
    a.size = strlen(temp);
    cout << "size = " << a.size << endl;
    a.str = new char[a.size + 1];

    strcpy(a.str, temp);

    return cin;
  }

  friend ostream &operator<<(ostream &os, const Mystring &a)
  {
    cout << a.str;
    return cout;
  }
  /***************************************************************/

  void update(const char *s)
  {
    delete[] str;
    size = strlen(s);
    str = new char[size + 1];

    strcpy(str, s); // copying given string in newly allocated memory location to str
  }

  // Member fucntion to Reverse string
  void RevStr()
  {
    int i = 0, j = size - 1;
    cout<< "size = "<< size<< endl; 

      for (i, j; i < size / 2; i++, j--)
      {
        str[i] += str[j];
        str[j] = str[i] - str[j];
        str[i] -= str[j];
      }
  }
};

// Driver code
int main(void)
{
  Mystring x("prashant"), z; // one parameter constructor will be called and object will be initialized
  Mystring y = x;            // copy constructor will be called and object will be initialized

  // displaying x and y string
  cout << x << endl
       << y << endl
       << endl;

  x.update("Prashant Kumar");
  cout << y << " " << x << endl;

  cout << "Enter Your father Name ";
  cin >> z;

  cout << "Father name is  = " << z << endl;

  cout<< x << endl; 
  x.RevStr(); 
  cout<< x<< endl; 

  getch();
  return 0;
}

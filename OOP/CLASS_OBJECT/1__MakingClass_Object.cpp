#include<iostream>
#include<conio.h>

using namespace std;
/* Access Modifier
1.private
2.public
3.protected
*/

// Making Own First Class

class Addition
{
  public: // Access Modifier
  /* Default Access Modifier
     Private; */

    int x; // Data members (Attributes);
    int y;

    int add() // Member function
    {
      return x+y ;
    }

  //Contructor

};

// Driver Code;
int main()
{
  // Creating object of Addition class;

  Addition A1; //Making an object of Addition class;

  // Accessing the data member of A1 object;
  A1.x = 5;  // Assigning the value of data members of A1 object; A1.x Here-->( A1 is Object name ) (. is know as dot operator) (x is data member of A1 object);
  A1.y = 10;
  int sum = A1.add();
  cout<<"Addition is "<< sum << endl;

  // Taking user input in A1 object's  data members (variable)
  cout << "Enter two Integer Number:: ";
  cin >> A1.x >> A1.y ;

  sum = A1.add();// it will return the sum of x and y of A1 object;

  cout<<"Addition is "<< sum << endl;

  // making one more object of Addition class
  Addition A2;
  A2.x = 56;
  A2.y = 45;
  sum = A2.add();
  cout<< "Addition of A2 object's data is " << sum << endl;

  getch();
  return 0;
}

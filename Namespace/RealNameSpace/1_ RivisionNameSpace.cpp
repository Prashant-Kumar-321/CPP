/* Basic Template of CPP

#include<iostream>
using namespace std;

int main()
{
 cout<<"Helo" ;

 return 0;
}

*/

#include <iostream>
#include<conio.h>

using namespace std;

// Namespace Declaration
namespace ABC
{
  unsigned short card[52];
  char G__name[20];
  double Avogadro_const;
  double Univer__Grav__const;
  float Golden_Ratio;
  unsigned char Gender, ans;

  int num1, num2;
}

namespace ABC
{
  char charge;

  namespace Nested__ABC
  {
    // Function definition
    //1. To read data in Arr
    void fill__Arry(unsigned short arr[], unsigned int n)
    {
      int i = 0;
      while(n--)
      {
        arr[i] = i+1;
        i++;
      }
    }

    //2.Display Array
    void display__Arry(unsigned short int a[], unsigned short int n)
    {
      int i = 0;
      while(n--)
      {
        cout<<a[i] << " ";
        i++;

        switch(i)// To print new line after every compilition of suit;
        {
        case 13:
        case 26:
        case 39:
        case 52:
          cout<<endl<<endl; // inserting a new line;
        }
      }
    }
  }
}

// Making Alias(Renaming) \* of NestedABC */
namespace NABC = ABC::Nested__ABC ;

//using namespace ABC;
//using namespace NABC;

int main()
{
 cout<<endl<<endl<< "\t\t\t\t\t\t\tNAMESPACE IN C++ \n\n\n";

 cout<< "Name Game Name : ";
 cin>> ABC::G__name;

 cout<< "\nEnter two Number : ";
 cin>> ABC::num1 >> ABC::num2;
 cout<< "Addition of both number is " <<(ABC::num1+ABC::num2) << endl;

 cout<<endl<< "52 Cards of Play Card : \n\n";
 // Fillin Card__array with cards
 ABC::Nested__ABC::fill__Arry(ABC::card, 52);
 // displaying the card in the console screen
 NABC::display__Arry(ABC::card , 52);

// cout<<endl<<endl;
// cout<< "Enter Avogadro Number: ";
// cin>> ABC::Avogadro_const;
//
// cout<<endl<< "Enter Golden Ratio : ";
// cin>> ABC::Golden_Ratio;
//
// cout<<endl<< "Enter Universal Gravitational constanct: ";
// cin>> ABC::Univer__Grav__const;

getch();
return 0;
}

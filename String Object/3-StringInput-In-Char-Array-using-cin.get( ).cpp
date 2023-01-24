#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  char Firstname[15], secondName[10];
  //istream&is = cin.get();

  cout<< "Enter your First Name: ";
  cin.get(Firstname, 15).get();
  cout<< "Ente your second Name : ";
  cin.get(secondName, 10).get();

  cout<< "\nFirst name : "<< Firstname<< "  Second Name : "<< secondName << endl;

  char fr1[20], fr2[20], fr3[20];

  cout<<endl<< "Your top three favourite name : "<< endl;
  cout<< "Fruit one: ";
  cin.get(fr1, 20).get();

  cout<< "Fruit two: ";
  cin.get(fr2, 20).get();

  cout<< "Fruit three: ";
  cin.get(fr3,20).get();

  cout<< "\nYour favourite fruit Names: "<< endl;
  cout<< fr1<< "\n"<< fr2<< "\n"<< fr3<< endl;


  // nested get() call
  cout<< "Enter two string "<< endl;
  char str1[20], str2[20];

  cin.get(str1, 20).get();
  cin.get(str2, 20).get();

  cout<< "strings are "<< endl;
  cout<<str1<< " "<< str2 << endl;





  getch();
  return 0;
}

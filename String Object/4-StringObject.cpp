#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
// declaraing string object
  string a,b,c;
  string name = "Prashant Kumar Gupta";

  a = " Math Mathematics"; // assign a string to an object
  cout<<"a = "<< a<< endl;

// string copy of string object
  b = a; // strcpy of a to b; strcpy(arr,brr);
  cout<< "b = "<< b<< " size = "<< a.length()<<  endl;

// Taking user input in string object
  // if I have to take string input of only one word then cin is enough to use
  // cin >> name;
  // but for long string in need to use : =
  cout<< "Enter your favourite Subject : "<< endl;
  getline(cin,a);

  // catanation to two string object
  c = a + b;

  cout<< "catanated String = "<< c<< endl;

  // finding length of a string ;
  int len = name.length();
  cout<< "length of my Name string  = "<<(len-2)<< endl<< endl;

  // Accessing the chracter of name object
  cout<< "Each Character of My Name : "<< endl;
  for(int i=0; name[i] != '\0'; i++)
    cout<< name[i]<< " ";

  cout<< " \a\n";

  getch();
  return 0;
}


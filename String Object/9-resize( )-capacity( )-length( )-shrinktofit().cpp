#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
  string str = "prashant kumar gupta";

  string str1;
  str1 = "Ram"; // assign to str1

  cout<< "name = "<< str1<< endl<< endl;

  // resizing str using resize()
  str.resize(10);
  cout<< "After resizing = "<< str<< endl;
  str.resize(12);
  str = "aoeftngpqfdfdfdfele";
  cout<< "After resizing = "<< str<< endl;

  cout<< "Capacity of str1 = "<< str1.capacity() << endl;
  //capacity() is used to find how much  memory is allocated to my object;
  // default string objects are allocated 15 bytes memory;
  cout<< "length of str1 = "<< str1.length()<< endl<< endl;


  str = "Abcde fghij klmno kdjflkdjfkldjflkdjfldkfjldjf";
  cout<< "str = "<< str<< endl;
  cout<< "Capacity of str = "<< str.capacity() << endl;
  cout<< "length of str = "<< str.length()<< endl;

  getch();
  return 0;
}

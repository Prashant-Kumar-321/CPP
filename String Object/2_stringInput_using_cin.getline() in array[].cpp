#include<iostream>
using namespace std;

int main()
{
  char name1[25]; // declare char arry to store string
  char name2[25];

  cout<< "Enter Your Name : ";
  cin.getline(name1, 25);
  // It will take string input in char array of length one less
  // than the numer given in function parameter
  cout<< "Enter your friend Name : ";
  cin.getline(name2, 25);

  cout<< "Name : "<< name1<< endl;
  cout<< "Friend Name : "<< name2<< endl;

  // printing each character of name1 array
  int i = -1;
  while( name1[++i] != '\0')
  {
    cout<< name1[i]<< " ";
  }
  //cin.getline(name1,25).getline(name1,25); it is possible;



  return 0;
}

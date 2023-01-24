#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
  char name1[25];
  char name2[25];
  char name3[20];
  char name4[15];
  char name5[20];

  // User input
  cout<< "Enter five names : "<< endl;
  cin.get(name1, 25).get();
  cin.get(name2, 25).get();

  cin.getline(name3, 20).getline(name4, 15); // nested call
  cin.getline(name5, 20);

  // display in the screen
  system("cls");
  cout<< "Five names : "<< endl;
  cout<<"1.Name = "<< name1 << endl;
  cout<<"2.Name = "<< name2 << endl;
  cout<<"3.Name = "<< name3 << endl;
  cout<<"4.Name = "<< name4 << endl;
  cout<<"5.Name = "<< name5 << endl;
  cout<< "\n\n\n";

  char *name[5]; // Array of Pointer i.e we can store addresss of 5 string in the array;
  // storing address of array in name array of Pointer
  name[0] = name1;
  name[1] = name2;
  name[2] = name3;
  name[3] = name4;
  name[4] = name5;

  // Accessing string with( name pointer) with single loop;
  for(int i=0; i<5; i++)
  {
      for(int j=0; name[i][j]!='\0'; j++)
          cout<< name[i][j]<< " "; // printing each character of string

      cout<< endl;
  }



  // printing five name k
  cout<< "1.Name = "<< name1<< endl;
  cout<< "2.Name = "<< name2<< endl;

  getch();
  return 0;
}

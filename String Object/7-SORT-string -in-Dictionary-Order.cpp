#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
  string name[5] = { "ZPrashant kumar ", "Nishant kumar ", "Zhubham mahto", "Ravi Gupta", "Swati Kumari" };

  /*
  string a("Mobile is not good \n");
  string b = "My Laptop is best \a";

//  // Dynamic memory Allocation of string object using constructor;
//  string*p = new string("Nishant ");
//  *p = "Prashant ";
//  cout<< p[0]<< endl;
//  delete p;
  cout<< a;
  cout<< b;
  */

  // sorting that string in dictionary order
  for(int i=0; i<4; i++)
    for(int j=i+1; j<5; j++)
    {
      if(name[i] > name[j])
      {
        // swap both string
        string temp = name[i];
        name[i] = name[j];
        name[j] = temp;
      }
    }

  cout<< "Name is Increasing order \n";
  for(int i=0; i<5; i++)
    cout<< name[i]<< endl;




  getch();
  return 0;
}

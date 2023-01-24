#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main(void)
{
  string str = "prashant";
  int i;
  cout<< "capacity = "<< str.capacity()<< endl;

  // accessing each element of str container like array
  for(i=0; i<str.length(); i++)
    cout<< str[i]<< " ";

  cout<<endl;

  getch();
  return 0;
}

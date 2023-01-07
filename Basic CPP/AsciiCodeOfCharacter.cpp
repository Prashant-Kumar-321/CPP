#include<iostream>
#include<conio.h>

using namespace std;

 int main(void)
{
  char ch;
  cout<<"Enter a character \n";
  cout<<"character = ";

  // TAING INPUT FROM USER ;
  //  cin>>ch;
  ch = getche();

  int x = ch;
  cout<<endl<<"Ascii code = "<<x<<endl;
  cout<<endl<<"Ascii code = "<<int(x)<<endl;// implicitly printing the value of character in interger which is basically its(char) Ascii code;

  getch();
  return 0;

}

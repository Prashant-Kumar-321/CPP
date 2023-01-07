#include<iostream>

#include<stdlib.h>
#include<conio.h>
#include<unistd.h>


using namespace std; //==>Using Directives

int main()
{
  // Printing something in the output screen
  //endl(keyword)--->\n (break line move cursor to the next line);

  std::cout<<"Nameste Logo\n";// std is name of namespace
  cout<<"Hello World "<<endl;
  cout<<"Nameste World\tHello "<<"My Programming friends"<<endl<<endl;

  cout<<"Nameste \n"<<endl<<endl;

  sleep(2); // requesting to sleep program for two second;
  system("cls");
  getch();

  // taking input from user ;
  int x,y,z ;

  cout<<"Enter Age of your three Friends ";
  cin>>x >>y >>z;
  cout<<"Your age is "<<char(x)<<" " <<x;

//  return 0;
}

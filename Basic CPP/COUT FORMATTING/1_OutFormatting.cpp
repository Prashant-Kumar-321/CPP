#include<iostream>
#include<iomanip> // manipulator/Formatting function
#include<conio.h>
using namespace std;

int main()
{
  int num = 90;
  cout<< "Enter a number : "<<flush<<endl<< "\n";
  // endl/ inserted new line and flushes the out buffer;
  // flush/ flushes the output buffer

  cout<< "My name is Prashat\n";
  cout<<setw(36)<< "My name is Prashat"<<endl;//stringLength = 18; 18char space in starting will be added

  cout<<setw(5)<<"My"<< " Name is Prashant"<<endl;//"My" string will be printed in 5 fiels width; // i.e 3 char in starting will be left

  cout<<setw(10)<<""<< num<<endl ;// 10 char width will be left at starting
  cout<< setw(12) << ""<< "Hello" << setw(25) << "World" << endl;

  cout<< "asdfg;ll\n";
  cout<< setw(10)<<left;
  cout<< 55<< endl; // space of 8 character ;


  cout<<setw(20)<<left/*justification direction*/<<"Candidate Name" << "|Depatrment"<<endl<<endl;
  /*justification default direction is right*/
  //A column of 20 char has been set with ---> setw(20)<<left<<


  cout<<setw(10)<<left<<"|--------"<< setw(10)<<left<< "|--------"<<"row-end"<<endl;
  // |         |          rowend



 getch();
 return 0;
}

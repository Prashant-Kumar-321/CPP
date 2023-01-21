#include<iostream>
#include<conio.h>// Implementing getch();
#include<cmath>


using namespace std;

int main()
{
  int hh, mm;
  char ch;

  //1.Take input Time in (HH::MM) ;
  cout<< "Enter current Time (formate* important)\n";
  cout<< "HH::MM = ";
  //  cin>>hh >>/* ch >> ch >>*/ mm ;// cann't do with that ;
  cin>>hh >> ch >> ch >> mm ;

  cout<<hh << " Hours  " << mm << " Minutes" <<endl ;


  // Taking user input of Date in DD/MM/YYYY formate;
  int DD, MM, Yr;
  cout<<endl<< "Enter Date of your Birthday\n(DD/MM/YY)" << endl;
  cin>>DD>>ch>>MM>>ch>>Yr;

  // printf its date of birth day
  cout<< "Day = " << DD << " MM = "<< MM << " YYYY = " << Yr << endl ;

 abs(44);
  getch();
  return 0;
}

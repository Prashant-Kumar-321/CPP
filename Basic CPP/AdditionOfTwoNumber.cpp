#include<iostream>

using namespace std;

int main()
{
  float x,y,z;

  cout<<"\t\t\t\tAddition Calculator \n\n\n";
  // Program to add two numbers
  cout<<"Enter two Numbers: ";
  cin>>x;
  cin>>y;

  z = x+y;
  cout<<"Sumation of (" << x << " " << y << ") = "<<z<< endl;

  /* */
  char ope;
  cout<<"\t\t\t\tAddition Calculator \n\n\n";
  cout<<"Enter\n" ;
  cout<<"Num1 + Num2 = ";
  cin>>x >> ope >>y;

  switch(ope)
  {
  case '+':
    cout << "Summation = " << x+y << endl;
    break;
  default:
    cout<<"Invalid Operator"<<endl ;
  }



  return 0;
}

#include<iostream>
#include<conio.h>

using namespace std;

class DATE
{
    int DD, MM , YY; // Cann't be accessed directly from outside the class
  public:
     DATE () {}
     DATE(int d, int m, int y)
     {
       DD = d ;
       MM = m ;
       YY = y ;
     }

     //Friend function declaration
     friend istream& operator>> (istream&, DATE&);
     friend ostream& operator<< (ostream&, DATE);

     //Member Function declaration
     DATE operator+(DATE );
     DATE operator-(DATE );

};

// Definition of FRIEND Function
// Another way to overload operator
istream& operator>> (istream&is, DATE &d)
{
  char ch;
  cin>>d.DD >>ch>> d.MM>> ch>> d.YY;

  return is;  // to take input in multiple Object in single line of cin>>d1>>d2>>d3;
}

ostream& operator<< (ostream &os, DATE d)
{
  ///cout<< d.DD<< "/"<< d.MM<< "/" << d.YY;
  cout<< "Date: "<< d.DD<< " Month: " << d.MM<< " Year: "<< d.YY;

  return os; //To able to do cout<<d1<<d2<<d3;
}

// definition of member function ;
DATE DATE::operator+(DATE a)
{
  DATE temp;
  int d = DD + a.DD;
  int m = MM + a.MM + d/30;

  temp.YY = YY + a.YY + m/12;
  temp.MM = m%12;
  temp.DD = d%30;

  return temp;
}

DATE DATE::operator-(DATE a)
{
  DATE temp;

  // to reseve the date of d1 object object passed implicitly;
  temp.DD = DD;
  temp.MM = MM ;
  temp.YY = YY;

  if(DD<a.DD)
  {
    temp.DD += 30;
    temp.MM--;

    if(temp.MM< a.MM)
    {
       temp.MM += 12;
       temp.YY--;
    }

  }
  else if(MM < a.MM)
  {
    temp.MM += 12;
    temp.YY--;
  }


  temp.DD -= a.DD;
  temp.MM -= a.MM;
  temp.YY -= a.YY;

  return temp;
}


// Driver code
int main()
{
  DATE d1(07,9,2003), d2(30,5,2023);
  DATE d3;

  cout<< "Enter two date (*formate = dd/mm/yy) "<< endl;
  cin>> d1>> d2;
  cout<< d1<< " \n"<< d2<< endl; // printing the values of object with the help of cout object

  // Addition of DATE object
  d3 = d1 + d2;
  cout<< d3<<endl;
  d3 = d2-d1;
  cout<< d3;


  getch();
  return 0;
}

























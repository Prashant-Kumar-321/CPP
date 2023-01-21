#include<iostream>
#include<cstring>
#include<conio.h>

using namespace std;

class STUDENT
{
  int age;
  char name[25];

public:

  // getter and setter of age
  unsigned int getAge()
  {
    return age;
  }
  void setAge(int a)
  {
    if(a<0)
      a *= -1;

    age = a;
  }

  // getter and setter of name
  char* getName()
  {
    return name;
  }
  void setName(char*a)
  {
    strcpy(name,a);
  }

  // Contructor
  STUDENT(int a = 0, const char*n = "Name")
  {
    age = a;
    strcpy(name, n);
  }


};

/* Driver code*/

int main(void)
{
    char tem[25];
    int age;

  // Making array of object of STUDENT class
  STUDENT S[5] = {
                  STUDENT(15,"prashant kumar" ),
                  STUDENT(22,"Rohit Ram Ganjhu"),
                 };

  // Taking input of student detail form user
  for(int i=0; i<5; i++)
  {
    cout<< "\tEnter "<<(i+1)<< " student details "<< endl;
    cout<< "\tStudent Name : "<< flush;
    fflush(stdin);
    gets(tem);
    S[i].setName(tem);

    cout<< "\t Age         : "<< flush;
    cin>> age;
    S[i].setAge(age);

    system("cls");
  }

  // printing the detail of student
  cout<< "Student detail "<< endl;
  for(int i=0; i<5; i++)
  {
   cout<< "Name : "<< S[i].getName()<< endl;
   cout<< "Age  : "<< S[i].getAge()<< endl;
   cout<< "\n\n";
  }

  getch();
  return 0;
}

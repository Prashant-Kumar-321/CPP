#include<iostream>
#include<conio.h>
#include<string> // for string object
using namespace std;

int main()
{
  // declaring string
  string obj("Prashant");

  //cout<< "Enter a string : ";

  // taking string input using getline()
  //getline(cin,obj);

  // displaying stored string in obj
  cout<< "String = "<< obj<< endl;

  // Inserting a character in obj string
  obj.push_back('K');

  // displaying string after addin a extra charcter in string
  cout<< "String after inserting = "<< obj << endl;

  // deletign last characte form obj string
  obj.pop_back();
  cout<< "String after deletion = "<< obj << endl;

  // deleting all character of my string obj with the help of pop_back()
  int i = obj.length();
  for(i; i>3; i--)
    obj.pop_back();

  // inseriting some charcharter in my string
  obj.push_back('A');
  obj.push_back('B');

  cout<< "After deleting all character = "<< obj << endl;

  getch();
  return 0;
}

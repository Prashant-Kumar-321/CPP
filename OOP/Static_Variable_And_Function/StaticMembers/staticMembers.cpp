#include<iostream>
#include<conio.h>
using namespace std; 

class Account
{
private: 
  int balance; 
  static float roi; 
public:
  void setBalance(int balance){this->balance = balance;}

  static float getRoi(){return roi;}
  static void SetRoi(float r){roi = r; }

}; 

float Account::roi; 

/**Note :-
 *  Static Members -> Class Members 
 * 
 * static Member variable gets memory only when you define it outside the class 
 * 
*/


int main(int argc, char* agrv[])
{
  Account a1, a2; 
  cout<< a2.getRoi()<< endl; 
  Account::SetRoi(3.8); 
  cout<< Account::getRoi()<< endl; 

  return 0; 
}
#include<iostream>
#include<cstring>
#include<string>
#include<conio.h>
using namespace std; 

// reversing string 
void reverseString(string&str)
{
  int i,j; // to  traverse loop 
  //i ---> from forward , j---> from backword
  i = 0, j = str.length()-1; // i = 0, j= 4; 
  for(i,j; i<=j; i++, j--)
  {
    // str[i] ^= str[j]; 
    // str[j] ^= str[i]; 
    // str[i] ^= str[j]; IN this Algorithm range of char type will problem

    // str[i] += str[j]; 
    // str[j] = str[i] - str[j]; range problem;  
    // str[i] -= str[j]; 
    
    char tem = str[i]; 
    str[i] = str[j]; 
    str[j] = tem;  
  }
 
}


// Driver code ; 
int main(void)
{
  // Program to reverse string 
  string str = "CAT";
  cout<< "Before reversing; String = "<< str<< endl;  
  reverseString(str); 

  cout<<"After reversing; String = "<< str<< endl; 

  getch(); 
  return 0; 
}
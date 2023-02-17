#include<iostream>
using namespace std; 

// Global function template
template<class D1, class D2>
D1 max(D1 a, D2 b)
{
  return (a>b) ? a : b; 
}

int main(void)
{
  system("cls"); 
  cout<< "int maximum = "<< max<int ,int> (9,8)<< endl;            // 9
  cout<< "char Maximum = "<< max<char ,char>('s','a')<< endl;       //s
  cout<< "string Maximum = "<< max<string, string>("ABC", "PQR");   // PQR
  cout<< "int float Maximm = "<< max<float, int> (8.45, 2)<< endl;  // 8.45
  cout<< "int char Maximm = "<< max<int, char> (85 ,'0')<< endl;  // 8.45

  return 0; 
}
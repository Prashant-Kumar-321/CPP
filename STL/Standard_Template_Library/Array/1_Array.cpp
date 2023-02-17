#include <iostream>
#include <array>

using namespace std;

int main()
{
  array<int, 10> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Intializing 'a' array object
  array<int, 10> b = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  // Accesing elements of array a (In array style)
  a[5] = 30;
  a[1] = 80;

  int i;
  cout << "array a ===> " << endl;
  for (i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
    // cout<< a.at(i)<< " ";
  }
  cout << endl;
  cout << get<3>(a) << endl; // element at 3 indx of a
  cout << "First Element = " << a.front() << endl;
  cout << "Last Element = " << a.back() << endl;

  // displaying the elements of array b;
  b.at(8) = 70; // b[8] = 70;
  b.at(0) = 50; // b[0] = 50;
  
  cout << "array b ====> " << endl;
  for (i = 0; i < b.size(); i++)
  {
    cout << b[i] << " ";
  }
  cout << endl<<endl; 


  // swapping the value of array a and b
  a.swap(b); 
  cout<< "a ====> "<< endl; 
  for(i=0; i<a.size(); i++)
  {
    cout<< a[i]<< " "; 
  }
  cout<< endl;
  cout<< "b ====>  "<< endl; 
  for(i=0; i<b.size(); i++)
  {
    cout<< b[i]<< " "; 
  }
  cout<<endl; 

  return 0;
}
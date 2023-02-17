#include<iostream>
using namespace std; 


class Swapping
{
  public: 
    template<class T>
    void swap(T a, T b) // function template 
    {
      cout<< "Before Swapping = "<< endl; 
      cout<< "a = "<< a<< endl; 
      cout<< "b = "<< b<< endl; 

      // swapping code 
      T temp = a; 
      a = b; 
      b = temp; 

      cout<< "\nAfter Swapping "<< endl; 
      cout<< "a = "<<a<<endl; 
      cout<< "b = "<<b<< endl; 
    }

}; 

// Driver code 
int main()
{
 
  Swapping a; 
  a.swap<int>(5, 9);// By Default T == int in case of function template
  a.swap<char>('P','A'); 
  a.swap<string>("ABC", "STU"); 

  return 0; 
}
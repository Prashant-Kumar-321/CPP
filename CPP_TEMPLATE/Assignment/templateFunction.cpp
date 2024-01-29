#include<iostream>
#include<utility>
using namespace std; 

// bigger is capable of finding max value of any data type provided operator> is overloaded in the corresponding class of object 
template<typename type> type bigger (const type& _val1, const type& _val2); 

// Print values of array of any time as long as operator<< (ostream&, const type&) is overloaded as friend function in the corresponding class 
template<typename arrType> void printArray(arrType arr[], int size); 


/* int main(int argc, char** agrv)
{
  int num1 = 30, num2 = 80; 
  float fnum1 = 4.78f, fnum2 = 8.90f; 

  float fmax = bigger(fnum1, fnum2); 
  int max = bigger(num1, num2);
  cout<< "float max = "<< fmax<< ",  int max = "<< max<< endl; 

  std::pair<int, int> p0(make_pair(89, 34));  
  std::pair<int, int> p1(make_pair(89, 12));  
  std::pair<int, int> maxP = bigger(p0, p1); 
  cout<< maxP.first<< " "<< maxP.second<< endl; 

  return 0; 
} */

template<typename type> type bigger(const type& _val1, const type& _val2)
{
  return (_val1 > _val2) ? _val1 : _val2; 
}

// Time structure 
struct Time 
{
public: 
  explicit Time(int h, int m, int s): hr(h), min(m), sec(s){   }

private: 
  int hr, min, sec; 

private: 
  friend ostream& operator<< (ostream& out, const Time& time); 
}; 

ostream& operator<< (ostream& out, const Time& time)
{ 
  cout<< "\r"; 
  cout<< time.hr<<":"<< time.min<< ":"<< time.sec<< endl; 
  return out; 
}


void driverFun_PrintArray()
{

  int arr[] = {2, 9, 6, 10, 13, 15, 25, 37, 43, 122}; 
  float farr[] = {2.09f, 3.45f, 12.32f, 34.21f, 6.98f, 31.86f};

  Time times[] = {
      Time(12, 45, 21), Time(11, 40, 13), 
      Time(9, 20, 43), Time(1, 25, 52)
  };   

  int n = sizeof(arr)/sizeof(int); 
  int fn = sizeof(farr)/sizeof(int);
  int tn = sizeof(times)/sizeof(Time);  

  printArray(arr, n); 
  printArray(farr, fn); 
  printArray(times, tn); 

}

// Main Driver function 
int main (){

  driverFun_PrintArray(); 

  return 0; 
}

template<typename arrType> void printArray(arrType arr[], int n)
{
  for(int i=0; i<n; ++i){
    cout<< arr[i]<< ", "; 
  }
  cout<< endl; 
}
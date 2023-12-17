#include<iostream>
using namespace std; 

template<class T> class Addition
{
private: 
  T mem1, mem2; 

public:
  Addition(T a, T b){
    mem1 = a; 
    mem2 = b; 
  }
  ~Addition(){
    cout<< "Addition destructor is called "<< endl; 
  }
  static void print_Mssge(){
    cout<< "This is Static member of Addition Template class"<< endl; 
  }

  T add(){
    return mem1 + mem2 ; 
  }

  void print(){
    cout<< mem1<< " and "<< mem2<< endl; 
  }

}; 

// Specializing Addition Generic class for string version 
template<> class Addition<string>
{
private: 
  string str1, str2; 
public:  
  Addition(string s1, string s2){
    str1 = s1, str2 = s2; 
  }
  string add(){
    return str2 +" "+str1; 
  }

  void Print(){
    cout<< str1<< " and "<< str2<< endl; 
  }
}; 


int main()
{
  Addition<int> objInt(34, 10); 
  Addition<float> objFloat(1.864, 3.16447); 
  Addition<string> objString("Confidence", "Focus");

  objInt.print_Mssge(); 
  objFloat.print_Mssge(); 

  cout<< "Concatinated String = "<< objString.add() << endl;   

  return 0; 
}
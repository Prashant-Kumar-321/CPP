// Division of two Numbers 
#include<iostream>
using namespace std;

int main()
{
  float a, b, c = 0;
  cout<< "Enter two nuumbers : ";
  cin>> a>> b;
 
  try  // try bolock 
  {
    // Possible exception condition 
     if(b == 0) 
        throw b; // can throw anything 

     if(b == 1)
        throw "pkg";

     if(b == 2)
        throw 'A';  

    //This code can generate execption on specific input 
     c = a/b; 
  }
  // Handlers of try block;  
  catch(const char*)
  {
    cout<< "This is second execption "<< endl;
    cout<< "Exception due to line no 24 code: "<< endl; 
    // log("line no 24"); log file 
    // maintaine log file of all possible exeption  
  }
  catch(float excptn)
  {
     cout<< "Dividing by Zero is not Possible Denominator = "<< excptn<< " \n";
      c = 0;  
  }
  //catch(...) this Must be last handler of try blcok; 
  catch(...) // universal handler 
  {
    cout<< "Catch Every execption "<< endl; 
    cout<< "Universal Catcher/handler  "<< endl; 
  }


  cout<< "Result = "<< c<< endl;

  cin.get(); 
  // cin.get(); 
  return 0;
}

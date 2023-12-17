#include<iostream>
#include<string>
using namespace std; 

// driver function
int main(int argc, char*argv[])
{ 
    fflush(stdin); // clear the input buffer(stream)
    string str; 
 
    getline(cin, str); 
    cout<< "str = "<< str<< endl;  

  return 0; 
}
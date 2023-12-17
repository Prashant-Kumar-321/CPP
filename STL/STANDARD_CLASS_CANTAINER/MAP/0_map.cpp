#include<iostream>
#include<map>
using namespace std; 

// Driver function 
int main(void)
{
  map<int,string> M; // declaration of map 

  // intialization of map  
  map<int,char> m1 {{1,'A'}, {2,'B'}, {3,'C'}, {4,'D'}}; // by default Sorted in Ascending order 
  map<int, int, greater<int>> m2 = {{0,48}, {1,49}, {3,51}, {4,52}, {5,53}, {6,54}, {7,58}}; // In Descending order 

 M[-2] = "Black";   
 M[1] = "Prashant"; 
 M[12] = "7856095155"; 
 M[4] = "17";
 M[10] = "Khunti"; 
 M[12] = "7856095154"; // previous value of 2(key) will be overrided

/*****************************************************************************/
  M.erase(-2); // Erase element according to provided key 
  // return how many values has been erased of provided key
  // key also get erased 
  cout<< M.at(-2)<< endl;

  if(M.find(-2) != M.end())
    cout<< "Key is present "<< endl; 

  else if(M.find(-2) == M.end()) // else block
    cout<< "key is not present"<< endl; 
    
/***************************************************************************/

/*#########################################################################*/
 // Accessing element(pair) of map using itertor 
 map<int,string>::iterator x = M.begin(); // begin() --> return read/write iterator of first pair of map 

  cout<< "Personal Details of person 1: "<< endl;
  for( ; x != M.end(); x++)
    cout<<(*x).first<< "  "<< x->second<< endl;  
   
  cout<< endl; 

  // Aceesing element of map using key 
  for(int i=-2; i<=13; i++)
  {
    if(M.find(i) != M.end()) // it means ith key is present in map 
      cout<<M[i]<< endl; 
  }
/*##################################################################################*/

  return 0; 
}
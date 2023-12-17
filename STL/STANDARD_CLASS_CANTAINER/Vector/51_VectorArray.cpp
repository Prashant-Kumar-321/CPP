#include<iostream>
#include<vector>

using namespace std; 

// Driver Function 
int main()
{
  vector<string> name(5); // created an string vector of size of size 5 

  name[0] = "Prashant"; 
  name[1] = "Nishant"; 
  name[2] = "Sona"; 
  name[3] = "Rahul"; 
  name[4] = "Abhishek"; 

  // displaying all name 
  for(string nme: name)
  {
    for(int i=0; nme[i] != '\0'; i++)
      cout<< nme[i]<< " "; 
    
    cout<< endl; 
  }

  cout<<"\n"; 

  

  return 0; 
}
#include <iostream>
#include <vector>
using namespace std;

void display(vector<float>vf)
{
  for(float ve: vf)
  {
    cout<< ve<< " "; 
  }
  cout<< endl; 
}

void setInput(vector<float> *vf)
{
  unsigned short n; 
  cout<< "Enter total number of student : "; 
  cin>>n; 

  cout<< "Enter Age of "<<n<< "Students : "<< endl; 
 
  while(n--)
  {
    unsigned short tempAge; 
    cin>>tempAge; 
    // vf->insert(vf->end(),tempAge); 
    vf[0].push_back(tempAge);  
  }
 
}

void getOuput(vector<float> vf)
{
  vector<float> :: iterator vitr; 
   
  // fetching elements of vector in array style 
  for(int i=0; i<vf.size(); i++)
   cout<< vf[i]<< " "; 
  
  cout<< endl; 
}

// driver code 
int main()
{
  // Intializing my vector like an array
  vector<float> Vf {8, 10, 23.45};
  display(Vf);
  cout<<Vf.size()<<Vf.capacity()<< endl; //<< Vf.max_size()<<endl; 

  // Erase all elements of vector (only element)
  Vf.clear();
  cout<<Vf.size()<< Vf.capacity()<< endl; 
  display(Vf); 
 
  Vf.shrink_to_fit(); // reduce capacity() to size()
  cout<<Vf.size()<< Vf.capacity()<< endl; 


  // take_input form user 
  setInput(&Vf); // function call by address
  getOuput(Vf);  // function  call be value 

  return 0;
}
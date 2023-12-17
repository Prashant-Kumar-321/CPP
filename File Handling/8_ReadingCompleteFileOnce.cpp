// Read a file into memory 
#include<iostream> //std::cout, std::cin
#include<fstream>  //std::ifstream
using namespace std; 

// Driver function 
int main(int agrc, char*agrv[])
{ 
   ifstream is("f:/CPP/File/cppFile.txt", ifstream::binary); 
   if(is)
   {
    // get length of file 
    is.seekg(0, is.end); // move file pointer to end fo the file  
    int length = is.tellg(); 
    is.seekg(0, is.beg);       // bring back file pointer to staring to the file 

    /*
    * seekg(offset, seekdir)--> set the position of file pointer in the input sequence(file) 
    * teelg()--> get the position of file pointer in the input sequence(file) 
    */ 

   //Allocate Memory 
   char *buffer = new char[length]; 

   // read data as block; 
   is.read(buffer, length); 

  // print content 
  cout<<"Content of the file "<< endl; 
  cout.write(buffer, length);
   }else{
    cout<< "Failed to open File"<< endl; 
   }

   is.close(); 


  return 0; 
}
#include<iostream> // istream and ostream classes 
#include<fstream>  // ifstream(Read) and ofstream(Write) classes 
#include<string>   // string class 
using namespace std; 

// driver code
int main(int argc, char*argv[])
{
  std::ofstream fout, fout1;  // writting on the file  
  fout.open("f:/CPP/File/first_File.txt", ios::app);  // create and file 
  if(fout.is_open()){
    cout<< "File successfully Created "<< endl; 
    fout<< "Nishant Kumar Gupta "; 
  }
  else{  // not created or open file 
    cout<< "Failed to created file "<< endl; 
  }
  fout.close(); // Release the memory Allocated to the file pointed by fout

   // second file 
  fout1.open("f:/CPP/File/second_File.txt",ios::trunc); // (default mode = trunc)

  if(fout1.is_open()){
    cout<< "File 2 successfully created \n";

    fout1<< "This is very adventures \n";
    fout1<< "Phone Number: "; 
    fout1<< 7856095154; 
    fout1<< endl;  

  }else{
    cout<< "File2 not created"<< endl; 
  }

  fout1.close(); 

  
  return 0; 
}
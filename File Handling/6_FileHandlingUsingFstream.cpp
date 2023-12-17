#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int agrc, char*agrv[])
{
  string line; 
  fstream fio("f:/CPP/File/samaple1.txt", ios::out | ios::in); 

  // writing in the file 
  if(fio.is_open()){
    cout<< "file successfully opened or created "<< endl; 
    fio<< "MY name is prashant Kumar Gupta "<< endl; 
    fio<< "I have so many dream  i want to achieve them "<< endl ; 
    fio<< "like placing in a good company with high sallary "<< endl; 
  }
  else{
    cout<< "File Not found"<< endl; 
  }

  // read content from file and displaying in the cosole screen :

  // Move ["file pointer"] to the begining of the file 
  fio.seekg(0, ios::beg);  
  cout<< endl; 
  // executing loop untill reaches to the eof (end of the file)
  cout<< "contnt of the file "<< endl; 
  while(!fio.eof()){
    getline(fio, line); 
    cout<< line<< endl; 
  }

  fio.close(); 

  return 0; 
}
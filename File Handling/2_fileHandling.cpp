#include<iostream>
#include<fstream>
#include<string>
using namespace std; 

// Driver function 
int main()
{ 
  // Writing on the file --------------------------------------------------------
  ofstream fileWrite; 
  fileWrite.open("F:/CPP/File/first_File.txt"); 

  if(!fileWrite.is_open()){
    cout<< "File Not crearted/ found "<< endl; 
  }
  else {
    string line;  // scope within else block 
    cout<< "file opened successfully \n"; 

    cout<< "Enter your Bio data :\nEnter -1 to exit\n\n"; 
    // cin.get(); // Clear input buffer
    fflush(stdin); 
    while(true){
      getline(cin, line); 
      if(line == "-1") // loop break condition 
        break; 
      fileWrite<< line; 
      fileWrite<< endl; 
    }
  }
  fileWrite.close();   
  
  // Reading from the file------------------------------------------------- 
  ifstream fin; 
  fin.open("F:/CPP/File/first_File.txt"); 
  if(!fin.is_open()){
    cout<< "File not found"<< endl; 
  }
  else {
    string line; 
    cout<< "\ncontent of the file : \n"; 
    // fin.seekg(7, ios_base::beg); // moving file pointer 
    while(!fin.eof()){
      //fin>>line;  // reading word by word from file;
      getline(fin, line); 
     cout<< line<< endl; 
    }
  }
  fin.close(); 

  return 0; 
}
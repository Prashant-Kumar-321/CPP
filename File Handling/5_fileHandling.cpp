#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// driver function entry point of execution of program
int main()
{
  string line = "";
  ofstream fout("F:/CPP/File/sample.txt", ios::app);
  if (fout.is_open()){
    cout << "Enter you hobby : " << endl;

    while (fout) // execute a loop if file is successfully open
    {
      // Read a line from standard input stream
      getline(cin, line);

      // press -1 to exit
      if (line == "-1")
        break;

      // write line in the file
      fout << line << endl;
    }
  }
  else{
    cout << "File not Created" << endl;
    exit(-1);
  }
  // close the file;
  fout.close();
  system("cls"); 

  // read content of the file 
  ifstream fin("F:/CPP/File/sample.txt"); 
  if(fin.is_open()){
    cout<< "File successfully open"<< endl; 

    cout<< "My hobby is :: ---> "<< endl; 
    while(getline(fin, line)){ // executing a loop untill EOF (end of file);
    // Another way (!fin.eof()) // getline(fin, line); 
      cout<< line<< endl; 
    }

  }else{
      cout<< "File not found"<< endl; 
  }

  fin.close(); 

  return 0;
}

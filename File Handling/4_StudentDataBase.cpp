#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
unsigned ID;  //global variable 

// function prototype
void printChoice(void); 

// class student 
class Student 
{
  int age,id; 
  string name, stream; 
public:
  bool addStudent(); 
  bool searchStudent(int id); 
  bool deleteStudent(int id); 
  bool updateStudent(int id); 
  void printAllStudent();
}; 

//Driver function 
int main(int agrc, char*agrv[])
{
  int choice; 

  ifstream Readfile;  // ifstream ==> input file stream class 
  Readfile.open("f:/CPP/File/ID.txt"); 
  if(Readfile.is_open()) {
    while(!Readfile.eof())
    {
      Readfile>> ID; 
    }
   Readfile.close(); 
  }
  else { // file not found or couldn't open 
    cout<< "File not found !"<< endl; 
  }

  // Main Program loop 
  while(true)
  {
    printChoice();  //function call to print preferable choices 
    cin>>choice; 

    Student stud; 
    int id; 
    // system("cls"); 
    switch(choice)
    {
      case 1: 
            stud.addStudent(); 
            break;
      case 2:
            cout<< "Enter student id \n"; 
            cin>> id; 
            stud.searchStudent(id); 
            break; 
      case 3: 
            cout<< "Enter student id \n"; 
            cin>> id; 
            stud.updateStudent(id);
            break; 
      case 4: 
            cout<< "Enter student id \n"; 
            cin>> id; 
            stud.deleteStudent(id); 
            break; 
      case 5: 
            system("cls"); 
            cout<<"Information of all Students :-: \n"<< endl; 
            stud.printAllStudent(); 
            break; 
      case 6: 
            return 0; 
      default: 
        cout<< "Invalid Selection"<< endl; 
    }

    cout<<"\n"<< endl; 
  }

  cin.get();
  return 0; 
}

// function defintion 
void printChoice(void){
    cout<< "Enter Your preferble choice"<< endl; 
    cout<< "1.Add student"<< endl; 
    cout<< "2.Search a Student"<< endl; 
    cout<< "3.Update student's Detail"<< endl; 
    cout<< "4.Delete a Student "<< endl; 
    cout<< "5.Print all students' detail"<< endl; 
    cout<< "6.Close the Program "<< endl; 
}

// definition of Student class member function 
bool Student:: addStudent()
{
  ofstream fout; 

  fout.open("f:/CPP/File/student.txt", ios::app); 
  if(!fout.is_open()){
    cout<< "Error: File couldn't open \a"<< endl ;
    exit(0); 
  }
  // file created or open successfully ; 
  else{  
      // taking input of all details of students; 
      cout<< "Enter following Details of students"<< endl; 
      cout<< "Name: "; 
      fflush(stdin); 
      getline(cin, name); 

      cout<< "Age: "; 
      cin>>age; 

      cout<< "Stream: "; 
      fflush(stdin); 
      getline(cin, stream);

      // Adding details of student in the file
      fout<< ++ID<< endl; 
      fout<< name<< endl; 
      fout<< age<< endl; 
      fout<< stream<< endl<< endl; 
    cout<<"Student added successfully"<< endl;  
    fout.close();
  }

  //entering id in ID file 
  fout.open("F:/CPP/File/ID.txt", ios::app);
  if(!fout.is_open()){
    cout<< "ID file couldn't found \n"; 
  }
  else{
    fout<< ID<< endl; 
    fout.close(); 
  }

  return true;   
}

bool Student:: searchStudent(int id)
{

  return true; 
} 

bool Student:: deleteStudent(int id)
{
  return true; 
}

bool Student:: updateStudent(int id)
{
  return true; 
}

void Student:: printAllStudent()
{
  std::string line; 
  std::ifstream fin("F:/CPP/File/student.txt", ios::in);
  if(fin.is_open()){
    while(!fin.eof())
    {
      getline(fin, line); 
      std::cout<< line<< std::endl; 
    }
  }
  else{
    cout<< "Failed to open File "; 
  }
  fin.close();  
}


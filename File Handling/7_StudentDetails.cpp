#include<iostream>
#include<fstream>
#include<sstream>

using namespace std; 
// Declare all structures in studetl namespce 
namespace studetl{
  struct Address; 
  struct Contact;
  struct ParentDetail; 
  struct Student; 
}
typedef struct studetl::Address{
  string vill, po, ps; 
  string state; 
  unsigned pin; 
}Address; 

typedef struct studetl::Contact{
  string email; 
  unsigned long long int phone; 
}Contact; 

typedef struct studetl::ParentDetail{
  string fname, mname; 
  string foccupation , moccupation; 
  Contact contact; 
}ParentDetail;

struct studetl::Student{
  string name; 
  unsigned clss, rllno, idcardNO; 
  Address add; 
  ParentDetail pd; 
}; 

void readStudentInfo(struct studetl::Student &student);
void writeInFile(struct studetl::Student &student);
void printStudentDetail(void);  

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// driver function; 
int main(int agrc, char*agrv[])
{
  // struct studetl::Student student; 
  // readStudentInfo(student);
  // writeInFile(student); 
  printStudentDetail(); 

  return 0; 
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
void readStudentInfo(struct studetl::Student &student){
  cout<< "Enter Details of student : \n"<< endl; 
  cout<< "Student full Name: "; 
  fflush(stdin); 
  getline(cin, student.name); 

  cout<< "Class : "; 
  cin>> student.clss; 

  cout<< "Class roll No: "; 
  cin>> student.rllno;

  cout<< "Id card No: "; 
  cin>> student.idcardNO;  
  
  // parent details 
  cout<<"Parent Details: "<< endl; 
  cout<<"Father name : "; 
  fflush(stdin); 
  getline(cin, student.pd.fname);  

  cout<< "Mother name: "; 
  getline(cin, student.pd.mname); 

  cout<< "Father occupation: "; 
  getline(cin, student.pd.foccupation); 

  cout<< "Mother occupation : ";
  getline(cin, student.pd.moccupation); 

  cout<< "Email Address: "; 
  getline(cin, student.pd.contact.email); 
  
  cout<< "Phone number : "; 
  cin>> student.pd.contact.phone; 

  // take addresss 
  cout<< "Address: "; 
  cout<< "village : ";
  fflush(stdin); 
  getline(cin, student.add.vill); 

  cout<< "Post office : "; 
  getline(cin, student.add.po); 

  cout<< "Police station: "; 
  getline(cin, student.add.ps); 

  cout<< "pin : "; 
  cin>>student.add.pin; 

  cout<< "State: ";
  fflush(stdin); 
  getline(cin , student.add.state); 
}

void writeInFile(struct studetl::Student &student){
 ofstream fout("f:/CPP/File/StudentData.txt", ios::app); 

 if(!fout.is_open()){
  cout<< "Failed to create file "; 
  cout<< "\nGive correct path"<< endl; 
  exit(-1); 
 }
 else{
  fout<< student.name<< endl; 
  fout<< student.clss<< endl; 
  fout<< student.rllno<< endl; 
  fout<< student.idcardNO<< endl;
  fout<< student.pd.fname<< endl; 
  fout<< student.pd.mname<< endl; 
  fout<<  student.pd.foccupation<< endl;
  fout<< student.pd.moccupation<< endl; 
  fout<< student.pd.contact.email<< endl; 
  fout<< student.pd.contact.phone<< endl;
  fout<<student.add.vill<< endl;
  fout<< student.add.po<< endl;
  fout<< student.add.ps<< endl; 
  fout<< student.add.pin<< endl;
  fout<< student.add.state<< endl;     
 }
 fout.close(); 
}

void printStudentDetail(void) {
  struct studetl::Student student; 

  ifstream fin("f:/CPP/File/StudentData.txt", ios::in); 
  // read details of student from file 
  if(fin.is_open()){
  std::string temp;
  stringstream Int; 

  // Reading all info of a student 
  getline(fin, student.name); 
  getline(fin, temp);
  Int<< temp; 
  Int>>student.clss; 

  getline(fin, temp);
  Int<< temp; 
  Int>>student.rllno;

  getline(fin, temp); 
  Int<< temp; 
  Int>>student.idcardNO; 

  getline(fin, student.pd.fname);  
  getline(fin, student.pd.mname); 
  getline(fin, student.pd.foccupation); 
  getline(fin, student.pd.moccupation); 
  getline(fin, student.pd.contact.email); 

  getline(fin, temp);
  Int<< temp; 
  Int>> student.pd.contact.phone; 

  getline(fin, student.add.vill); 
  getline(fin, student.add.po); 
  getline(fin, student.add.ps); 

  getline(fin, temp); 
  Int<< temp; 
  Int>> student.add.pin; 

  getline(fin , student.add.state);  
 
 // printing on  the console screen 
  cout<< "Student Basic Information :-"<< endl; 
  cout<< "  Student full Name: "; 
  cout<< student.name<< endl; 

  cout<< "  Class : "; 
  cout<< student.clss<< endl ; 

  cout<< "  Class roll No: "; 
  cout<< student.rllno<< endl; 

  cout<< "  ID Card No: "; 
  cout<< student.idcardNO << endl; 
  

  // parent details 
  cout<<"Parent Details: "<< endl; 
  cout<<"  Father name : "; 
  cout<< student.pd.fname<< endl; 

  cout<< "  Mother name: "; 
  cout<< student.pd.mname<< endl; 

  cout<< "  Father occupation: "; 
  cout<< student.pd.foccupation<< endl; 

  cout<< "  Mother occupation : ";
  cout<< student.pd.moccupation<< endl; 

  cout<< "  Email Address: "; 
  cout<< student.pd.contact.email<< endl;   

  cout<< "  Phone number : "; 
  cout<< student.pd.contact.phone<< endl;  

  //Addresss 
  cout<< "Address: "; 
  
  cout<< "  village : ";
  cout<< student.add.vill<< endl; 

  cout<< "  Post office : "; 
  cout<< student.add.po<< endl; 

  cout<< "  Police station: "; 
  cout<< student.add.ps<< endl; 

  cout<< "  pin : "; 
  cout<< student.add.pin << endl;  

  cout<< "  State: ";
  cout<< student.add.state<< endl; 
  cout<< "-----------------------------------------------------------------------------------"<< endl; 

  }
  else{
    cout<< "file not found "<< endl; 
    exit(-1); 
  }
  fin.close(); 
}



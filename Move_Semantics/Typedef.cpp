#include<iostream>
#include<string>
#include<memory>
#include<map>
#include<vector>

typedef std::string STRING;
typedef std::map<std::string, std::string> dictionary_t;
typedef std::map<std::string, std::string>::iterator dictionary_it; 

typedef unsigned int  UserID; 
typedef int Semaphore; 
typedef char Dir;  

//cpp syntax  
using Consistence = int;
using IntPtr = std::unique_ptr<int>;  
using int32 = long long int;
using ProcessID = unsigned int; 
using StringArray = std::vector<std::string>;  

int main(int argc, char** agrv)
{
  dictionary_t dictionary;
  dictionary_t::iterator it; 

  STRING name = "School"; 
  Semaphore mutex; 
  Dir dir;

  IntPtr intptr = IntPtr(new int); 
  int32 phoneNumber = 78556095154; 
  std::cout<< phoneNumber<< std::endl; 
  

  StringArray strArr; 
  strArr.push_back("string1"); 
  strArr.push_back("string2"); 
  strArr.push_back("string3"); 
  strArr.push_back("string4"); 
  strArr.push_back("string5");

  for(int i=0; i <= strArr.size(); ++i)
    std::cout<< strArr[i] << std::endl; 
}



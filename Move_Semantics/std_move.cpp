// Universal reference

/*
---------------------------------------------
           std::move
---------------------------------------------


  Definiton: 
----------------
  template <class T>
  constexpr remove_reference_t<T>&& move(T&& t) noexcept{
    reuturn static_cast<remove_reference_t<T>&&> (t); 
  }
  std::move doesn't move anything

  It converts any expression into an rvalue so that it can be bound to an rvalue reference


  Usages 
-------------------
use std::move to convert a lvalue to a rvalue
    so it will bind to an rvalue refernce 
    so that object will be moved rather than copied

  Guideline
-------------------

  Next operation after std::move is DESTRUCTION or ASSIGNMENT
  or rest to a known value by other means, such as vector<T>::clear()

  constainer long_lived = ... ; 
  {
    container possible = .... ; 
    if(...){
      long_lived = std::move(possible); 
    }
  }
    \
     \
      \
        Destroyed here. NO use after move
  
  ///////////////////////////////////////////   
  std::vector<std::string> v; 
  std::string str = "Hello"; 

  v.push_back(std::move(str)); 

  str = "World"; <-----------------------Assigned new value after move  

  ///////////////////////////////////////////////

  void maybe_insert(std::vector<std::string>& v, std::string&& str){
    
    if(someCondition){
      v.push_back(std::move(str)); 
    }
  }


  GuideLine: Don't std::move the return of a local variable
  Core Guideline F.48: Don't return std::move(local)

  c++ standard has a special rule for this
    The Return expression is an rvalue if it is a local variable or parameter


  std::string func( std::string param, std::string* ptr)
  {
    std::string local = "Hello"; 
    *ptr = local ; <--------- Lvalue
    *ptr = param;  <--------- Lvalue

    if(some_condition){
      return param; <----------------------------- rvalue
    }else if(other_condition){                           \ (Because they are about to be destroyed) (move constructr/assignment operator will be used)
                                                         /
      return local; <------------------------------rvalue
    }

    return *ptr; <--------------------lvalue copy constructor / Assignment will be used 
  }



*/

#include<iostream>
#include<string>
#include<conio.h>

class test
{
  int x; 
  public: 
    test(){
      std::cout<< "Default constructor is called \n"; 
      getch(); 
    } 
    test(const test& src){
      std::cout<< "copy constructor is called \n"; 
      getch(); 
    }
    test(test&& src){
      std::cout<< "Move constructor is called \n";
      getch();  
    }

    test& operator=(const test& src){
      std::cout<< "copy Assignment operator is called \n"; 
      getch(); 
      return *this; 
    }
    test& operator=(test&& src){
      std::cout<< "Move Assignment operator is called \n";
      getch(); 
      return *this;  
    }
}; 

test func( test tst, test* testPtr )
{
  test local;
  
  return local; 
}


int main()
{
  // int lvalue = 100; 
  // int&& rvRef = std::move(lvalue); 

  // std::cout<< &lvalue<< " "<< &rvRef<< std::endl; 

  // std::string str1 = "hello"; 
  // std::string str2 = std::move(str1); //Resources of str1 is transfered to str2 (move constructor is called) 
  // std::cout<< std::endl<< str1.empty()<< ", "<< str2<< std::endl; 

  test mainLocal; 
  test t = func(test(), &mainLocal);


}

/*

  default const
  move constructor
  default construtor
  Move constructor

*/
#include<iostream>
#include<cstdlib>
using namespace std; 

class PrivateClass
{
  public: 
    static PrivateClass* createInstance(int data) //(class method)
    {
      /*condition on statisfying of which only obeject of PrivateClass can be created 
      and the cndition is THAT When user will create instance by initializing OBJECT with value in the range 50-100 */

      if(data >=50 && data<= 100)
        return new PrivateClass(data); 
        
      else
        return nullptr; 

    }

    void print()
    {
      cout<< x; 
    }

  private: 
    PrivateClass(int x): x(x){} //constructor
    int x; 
};

//Driver function 
int main(int agrc, char** agrv)
{
  /*Note : Object to PrivateClass can only be created by calling creteInstace() static class method*/

  PrivateClass* ptrObj = PrivateClass::createInstance(80); 
  if(ptrObj == nullptr)
  {
    std::cout<< "Failed to crete instance of Private Class"<< std::endl; 
  }
  else
  {
    PrivateClass& refObj = *ptrObj; 
    refObj.print(); 
    delete ptrObj; 
  }

  return 0; 
}
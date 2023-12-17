#include<iostream>

class PMessageBox
{
public: 
  enum StandardButton{
    Yes = 1, 
    No = 2, 
    Ok = 3, 
    Cancel = 4
  };
  struct Box{
    int width; 
    int height; 
  }box1;
}; 


// driver function 
int main(int agrc, char*agrv[])
{
  // declaring an object of PMessageBox::StandardButton enum  
  PMessageBox::StandardButton reply;

  reply = PMessageBox::Ok; 
  std::cout<< "Yes = "<< PMessageBox::Yes<< std::endl;  
  std::cout<< "Ok = "<< reply<< std::endl; 



  PMessageBox::Box box1; // Making an object of Box struct of PMessageBox
  box1.width = 45; 
  box1.height = 3; 
  std::cout<< "Width = "<< box1.width<< std::endl; 
  std::cout<< "Height = "<< box1.height<< std::endl; 

  PMessageBox Pmb1; 
  Pmb1.box1.width = 10; 
  Pmb1.box1.height = 20; 
  std::cout<< "Cancel = "<< Pmb1.Cancel <<"\n"<< std::endl; // accessing enum via object 
  std::cout<< "Pmb1.box1.width = "<< Pmb1.box1.width<< std::endl; 
  std::cout<< "Pmb1.box1.height = "<< Pmb1.box1.height<< std::endl;   

  return 0;  
}
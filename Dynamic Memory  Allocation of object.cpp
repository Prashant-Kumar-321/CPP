#include <iostream>

class Addition
{
private:
  int x, y;

public:
  //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
  // constructor

  Addition()
  { // Default constructor
  }
  Addition(int a, int b=0) : x(a), y(b)
  { // parametrized constructor
  }
  ~Addition()
  { // destructor
  }

  // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  // Member function
  void display()
  {
    std::cout << x << " " << y << std::endl;
  }

  int add()
  {
    return (x + y);
  }

  //********************************************************************
  // setter function of x and y
  void setX(int a)
  {
    x = a;
  }
  void setY(int a)
  {
    y = a;
  }
};

int main()
{
  Addition *ptr = NULL; // not pointing to any memory location

  ptr = new(std::nothrow) Addition;
  ptr->setX(7);
  ptr->setY(4);
  (*ptr).display();
  std::cout<<ptr[0].add()<<std::endl<<std::endl; 
  delete ptr; 

  ptr = new(std::nothrow) Addition(8,9); // intializiation using constructor 
  ptr[0].display();
  std::cout<< ptr->add()<<std::endl<<std::endl;

  delete ptr;

  //Allocating Array dynamically 
  // int (*const Iptr)[10] = new int[10][10]; // (int*)malloc(10*sizeof(int)); 

  // for(int i=0; i<10; i++){
  //   for(int j=0; j<10; j++){
  //     Iptr[i][j] = i+j+3; 
  //   }
  // }

  // for(int j=0; j<10; j++){
  //     for(int i=0; i<10; i++)
  //         std::cout<<Iptr[i][j]<<" ";
  //     std::cout<<std::endl;  
  // }
  // delete[] Iptr; 

  // Array of object 
  // Addition Add[3] = {Addition(1,2), Addition(3,4), Addition(5,6)}; 
  Addition Add[3] = {3,5,8}; 

  ptr  = new Addition[3];  // dynamic memory allocation of object of Addition class
  ptr[0].setX(4); 
  ptr[0].setY(2); 
  ptr[0].display(); 
  delete[] ptr; 

  for(int i=0; i<3; i++)
  {
    Add[i].display(); 
  }



  return 0;
}
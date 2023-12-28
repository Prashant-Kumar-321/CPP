#include<iostream>
#include<memory>
using namespace std;

//** Implement Weak Pointer
class Animal 
{
public: 
  Animal(){cout<< "Animal is created\n"; }
  ~Animal(){cout<< "Animal is distroyed\n";}
  void printAnimal(){
    cout<< "Print Animal"<< endl; 
  }
}; 

int main ()
{
  std::shared_ptr<Animal> animal = make_shared<Animal>();
  std::weak_ptr<Animal> wAnimal = animal; 

  cout<< "Ref count "<< animal.use_count()<< endl;
  // Access resource through weak_ptr
  std::shared_ptr<Animal> useAnimal = wAnimal.lock();

  if (useAnimal.get() == nullptr){
    cout<< "Use Animal at 28 line of code is owing null resource\n"; 
  }else {
    useAnimal->printAnimal(); 
  }
  useAnimal.reset(); 
  cout<< "Ref count "<< animal.use_count()<< endl;

  return 0; 
}


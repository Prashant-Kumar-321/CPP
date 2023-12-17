#include<iostream>
#include<memory> //std::unique_ptr(C), std::make_unique<>()(FF): 

using namespace std; 

class STest
{
public: 
	//Constructor 
	STest() {
		std::cout << "Object Created " << std::endl; 
	}

	//Destructor 
	~STest()
	{
		std::cout << "Object Deleted " << std::endl; 
	}
};

//NOte: copy constructor and copy assignment operator are  
//DELETED from [unique_ptr] class 
// 
//unique_ptr::operator=(const unique_ptr<STest>&other) = deleted; 
//unique_ptr::unique(const unique_ptr<STest>&other)    = deleted; 

unique_ptr<STest> fun()
{
	unique_ptr<STest> ptr = make_unique<STest>();
	
	//return std::move(ptr);
	return (unique_ptr<STest>&&)ptr;
}

int main()
{
	/*
	//unique_ptr<STest> ptr1(new STest());
	unique_ptr<STest[]> ptr1 = std::make_unique<STest[]>(10); //Creating a 'STest' object dynamically in HEAP using (Factory Function)

	unique_ptr<STest[]> ptr2;
	//unique_ptr<STest> ptr2 = ptr1; //Can't do this
	//ptr2 = ptr1;  // Can't Do
	// 
	//ptr2 = (unique_ptr<STest[]>&&)ptr1; //Making ptr1 as a temporary variable
	ptr2 = std::move(ptr1); //Move symentatics 
	//Now ptr2 is pointing to my object and ptr1 is no longer pointing to the object allocated dynamically
	*/


    std::cout << "Main Enter " << std::endl; 
	unique_ptr<STest> ptr; 

	ptr = fun(); //Move Assignment operator will play its role in moving resources. 

	std::cout << "Main Exit " << std::endl;


	/*
	//std::unique_ptr<int[]> intPtr = std::make_unique<int[]>(10);
	//for (int i = 0; i < 10; ++i)
	//	intPtr[i] = i + 3; 

	//for (int i = 0; i < 10; ++i)
	//	std::cout << intPtr[i] << " "; 

	//std::cout << std::endl; 
	*/

}
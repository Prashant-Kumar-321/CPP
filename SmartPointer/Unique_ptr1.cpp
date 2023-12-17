#include<iostream>
#include<string>
#include<memory>

//#include<conio.h>
//#include<malloc.h>

using namespace std; 

struct cat
{
	//static int i; 
	int age; 
	cat():age(5) { cout << "Constructor \n"; }
	~cat() { cout << "Destructor \n";  }
};
//int cat::i = 0; //declare static int i outside of the class

//Definition of catArray using smart pointer(unique_ptr<>)
class catArray
{
public: 
	catArray(int cap): ptr(new cat[cap])
	{
		//ptr = make_unique<cat[]>(cap);
	}
private: 
	unique_ptr<cat[]> ptr; 
};

struct node
{
	int item; 
	unique_ptr<node> next;

	node():item(30)  { cout << "node constructor \n"; }
	~node() { cout << "node destructor \n"; }
};

int main()
{
	/*unique_ptr<cat> Icat = make_unique<cat>();
	std::cout << Icat->age << std::endl;

	//string* strPtr = str.get(); //Return row pointer to the object.

	Icat = make_unique<cat>(); //Assign Pointer to another cat 
	//Note: Icat will first deallocated the memeory 
	std::cout << Icat->age << std::endl;

	//std::cout << "Return Value = " << *str << std::endl; //if str is null, it will throw exception
	std::cin.get(); 
	*/
	
	
	catArray IndianCats(6); 
	

	{
		//linked-list using unique_ptr
		unique_ptr<node> start = make_unique<node>();
		start->item = 30;
		start->next = make_unique<node>();
		start->next->item = 40;
		if (start->next->next.get() == nullptr)
			cout << "Last node of list " << endl;
		else
			cout << "Not a last node of the list" << endl;

	std::cout << "Value stored in both node " << start->item << " " << start->next->item << std::endl; 
	}


}
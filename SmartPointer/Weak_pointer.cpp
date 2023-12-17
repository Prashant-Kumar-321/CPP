#include<iostream>
#include<conio.h>
#include<memory>

using namespace std; 

//Weak Pointer 
//class Mobile
//{
//public: 
//	Mobile() { cout << "Mobile constructor " << endl; }
//	~Mobile() { cout << "Mobile Destructor "<< endl;  }
//};
//
//
//int main()
//{
//	//std::weak_ptr<Mobile> wkptr(new Mobile); 
//	//We can only Assign or intialized Weak_ptr by shared_ptr; 
//	std::weak_ptr<Mobile> wkptr;
//	{
//		shared_ptr<Mobile> shApple = make_shared<Mobile>();
//		std::cout << "Ref count = " << shApple.use_count() << std::endl;
//		wkptr = shApple;
//		std::cout << "Ref count = " << wkptr.use_count() << std::endl;
//	}
//	std::cout << "Ref count = " << wkptr.use_count() << std::endl;
//	std::cout << "Resources exist or not = " << !wkptr.expired() << std::endl;
//
//	//wkptr.lock(); wkptr.expired(); 
//	/*{
//		std::shared_ptr<Mobile> shptr = make_shared<Mobile>();
//		cout << "shared ptr Ref count = " << shptr.use_count() << std::endl;
//
//		std::shared_ptr<Mobile> shptr1 = shptr;
//		cout << "shared ptr 1 Ref count = " << shptr1.use_count() << std::endl;
//
//		wkptr = shptr; 
//	}
//	std::shared_ptr<Mobile> shptr2 = wkptr.lock();
//	cout << "shared ptr Ref count = "<< shptr2.use_count() << std::endl;*/
//
//}


//Use-case of weak smart pointer. 
//It is used to remove cyclic Dependency between shared_ptr; 

struct Mother; 
struct Daughter; 
struct Son; 


struct Mother
{
	 Mother() {}
	~Mother() {cout<< "Mother Gone \n";}

	void setDaughter(const std::shared_ptr<Daughter> daughter)
	{
		myDaughter = daughter; 
	}
	void setSon(const std::shared_ptr<Son> son)
	{
		mySon = son; 
	}  

private:
	std::weak_ptr<Daughter> myDaughter; 
	std::weak_ptr<Son> mySon; 
};

struct Daughter
{
	 Daughter(std::shared_ptr<Mother> mother): myMother(mother){  }
	~Daughter(){ std::cout<< "Daughter Gone "<< std::endl; }

	std::weak_ptr<const Mother> myMother; 
};

struct Son
{
	Son(const std::shared_ptr<Mother> mother): myMother(mother){}
	~Son(){std::cout<< "Son gone \n";}

	std::weak_ptr<const Mother> myMother; 
}; 


int main()
{
	std::shared_ptr<Mother> mother = std::make_shared<Mother>(); 
	std::shared_ptr<Daughter> daughter = std::make_shared<Daughter>(mother); 
	std::shared_ptr<Son> son = std::make_shared<Son>(mother); 

	std::cout<< "Mother Ref count = "<< mother.use_count()<< std::endl; 
	std::cout<< "Son Ref count = "<< son.use_count()<< std::endl; 
	std::cout<< "Daughter Ref count = "<< daughter.use_count()<< std::endl; 

	mother->setDaughter(daughter); 
	mother->setSon(son); 

	printf("\n\n"); 
	std::cout<< "Mother Ref count = "<< mother.use_count()<< std::endl; 
	std::cout<< "Son Ref count = "<< son.use_count()<< std::endl; 
	std::cout<< "Daughter Ref count = "<< daughter.use_count()<< std::endl; 
}
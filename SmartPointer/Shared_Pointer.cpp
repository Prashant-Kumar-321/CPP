#include<iostream>
#include<memory>

using std::cout; 
using std::shared_ptr; 

struct Stest
{
public:
	int variable; 
	Stest() { cout << "Constructor gets called \n";  }
	~Stest() { cout << "Destructor gets called \n"; }
};

std::shared_ptr<Stest> demoFun()
{
	//std::shared_ptr<Stest> shPtr(new Stest()); 
	std::shared_ptr<Stest> shPtr = std::make_shared<Stest>(); //Recommanded since it is fast than above(espescially in case of more complex DS)
	std::cout << "Ref count = " << shPtr.use_count() << std::endl;

	shPtr->variable = 100; 

	return shPtr; 
}



int main()
{
	shared_ptr<int[]> shPtrInt(new int[10]);

	for (int i = 0; i < 10; ++i)
	{
		shPtrInt[i] = 2 * i + 1; 
	}

	for (int i = 0; i < 11; ++i)
	{
		cout << shPtrInt[i] << " "; 
	}
	cout << std::endl; 

}


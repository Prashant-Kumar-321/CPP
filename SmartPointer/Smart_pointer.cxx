#include<iostream>
#include<cstdlib>

using std::cout; 
using std::cin; 

/*
//Wrapper smart pointer class 
class SmartPtr
{
public: 
	explicit SmartPtr(int* p = nullptr) : ptr(p) { }

	~SmartPtr() { delete[] ptr; }

	
	//int& operator*() { return *ptr;}
	int& operator[](int idx)
	{
		return *(ptr + idx);
	}

private:
	int* ptr; //Actual Pointer variable of C/C++ Type
};
*/

//Generic smartPtr Class 
template<class Type>
class SmartPtr
{
public: 
	//Constructor
	 explicit SmartPtr(Type* p = NULL) : ptr(p) { }

	//Destructor
	~SmartPtr() { delete[] ptr; }

	//Overload Deferencing operator
	Type& operator*() { return *ptr; }

	//Overload arrow Operator
	//so that memeber of Type can be accessed
	//like ptr(it is useful if Type is either a class, struct or union type)
	Type* operator->() { return ptr; }

	//Overload subscript operator 
	//if ptr is will be pointing array then it will be useful to access all his memebers 
	Type& operator[](int idx) { return *(ptr + idx); }


private: 
	Type* ptr;	 //Actual Pointer
};

class Book
{
public: 
	Book():pages(0) { }
	Book(const std::string& bookName, unsigned int pages) : bookName(bookName), pages(pages) { }
	void print_detail()
	{
		std::cout << "Book Name = " << bookName << std::endl; 
		std::cout << "Total pages = " << pages << std::endl; 
	}

	//getter function for the book name 
	std::string book_name()const
	{
		return bookName; 
	}

	//Setter function 
	void setBookName(const std::string& bName)
	{
		bookName = bName; 
	}

	//setter function
	void setPages(int page)
	{
		pages = page; 
	}

private: 
	std::string bookName; 
	unsigned int pages; 
};

/*
int main(int argc, char** agrv)
{	
	//std::cout << "Value of Agrument count = " << argc << std::endl; 
	//for (int i = 0; i < argc; ++i)
	//{
	//	std::cout << agrv[i][0] << std::endl; 
	//}

	//SmartPtr<Book> Ptr(new Book[2]); 
	SmartPtr<Book> Ptr(new Book[2]); 

	Ptr[0].setBookName("Indian constitution");
	Ptr[0].setPages(307);

	Ptr[1].setBookName("Operating concept"); 
	Ptr[1].setPages(1300);

	for (int i = 0; i < 2; ++i)
		Ptr[i].print_detail(); 

	std::cout << std::endl; 

	return 0; 
}
*/
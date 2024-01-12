#include<iostream>
#include<memory> //std::unique_ptr

using std::cout,
std::cin,
std::endl; 


void fun()noexcept
{
    throw 20; 
}

struct School
{
    std::string schName; 
    int lowClass; 
    int upperClass; 

    School() { "School Created \n"; }
    ~School() { cout<< "School Destructed \n"; }
};

int main(int argc, char** agrv)
{
    std::unique_ptr<School> sch1(new School);
    std::unique_ptr<School> sch2(new School);

    //sch1.reset(sch2.get()); // Deallocte the object 
    //sch1.release();         //return pointer to the object
    //cout << sch1 << endl; 
    //cout << sch1 << endl; 
}

#include<iostream>
#include<conio.h>

using namespace std; 

class V1
{
    int a,b; 

    public: 
        V1(int x, int y)
        {
          cout<< "Parent Parametrized constructor is called "<< endl; 
          a = x; 
          b = y; 
        }
        V1() 
        {
          cout<< "Parent default Constructor is called "<< endl; 
        }
        ~V1()
        {
          cout<< "Parent Distructor "<< endl; 
        }

        void print() 
        {
          cout<< "a = "<< a<< " , b = "<< b<< endl; 
        }
}; 

class V2: public V1
{
    int c, d; 

    public:
        V2(int a, int b, int c, int d): V1(c,d) // --> parametrized constructor of parent child 
        {
          cout<< "Child parametrized Constructor is called"<< endl; 
          this-> c = a; 
          this-> d = b; 
        }
        V2 (): V1(3,9)
        {
         cout<< "child constructor is called "<< endl;  
        }
        ~V2()
        {
          cout<< "child Destructor "<< endl; 
        }

        void display()
        {
          print(); 
          cout<< " c = "<< c<< " , d = "<< d<< endl; 
        }

};


int main(void)
{   
    V1 v(5,9); 
    v.print(); 

    V2 cv(9,2,10,-30); 
    cv.display();

    return 0; 
}

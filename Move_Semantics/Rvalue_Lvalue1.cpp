/* LValue
   An lvalue is. roughly something: 
        1. that can on the left side of an assignemt 
        2. with a name 
        3. with and Address (most reliable condition)
       Eamples
-------------------------

    int var; 
    var = 52; <---------------------An obvious lvalue 

    const std::string hello  = "Hello"; 
    std::string greeting = hello; 
    (hello)<-------------------- const lvalues are still lvalues

    char* buffer = allocate_buffer(); 
    *buffer = '\o'; 


    std::array<widgetHandle, 300> widgets; 
    draw(widgets[123]); 


    (*buffer and widgets[123] ) <----------------------- these expressions are lvalues. 
  
    Rvalue
    An rvalue is , roughly anything that is not an lvalue 
      1. Temporary object 
      2. Literal constants (don't know what they are)
      3. Function return values ( that aren't lvalue reference)
      4. Results of built-in operator (+, -, %, / etc.)(That arent' lvalues)

    Rvalues usually have a short lifetime

    Lvalues References 
------------------------------------------------------
    1. Non-const lvalue reference can only bind to a lvalue 
        int& r0 = page_count; // okay, variable is a lvalue 
        int& r1 = data[20];   // okay , array subscript is a lvalue 
        int& r2 = year % 100; // error, a rvalue
        int& r3 = v.size();   // error, function return is ofte a rvalue
      
    2. Const lvalue reference can bind to anything(lvalue and rvalue)
        const int& r0 = year%100; //okay to bind to a rvalue
        const int& r1 = v.size(); // okay to bind a rvalue

--------------------------------------------------------------
    Rvalue References 
--------------------------------------------------------
   1. syntax
  
        Double ampersand "&&", in the declarator means rvalue reference type 

        void fun(foo&& par); 
            Type of "par" is "foo&&", or "rvalue reference to foo", or "foo ref ref"

    2. Semantics
     
        A rvalue reference can only bind to a rvalue

        void fun(int&& x);    // x  is rvalue reference of int type 
        void fun_foo(int& x); // x is non-const lvalue reference of int type

        int variable; 
        fun(variable); //error : argument is a lvalue  

        fun(42); 
        fun(v.size()); 
        
        The use of an rvalue reference is an lvalue;
            void fun( int&& x);  
            void gun( int&& y ){
                fun(y); <---------------- error: y is lvalue now in the gun function 
            }

            void hun(){
                gun(42); 
            }
   3. Guideline
        Guideline 1: No rvalue reference to const type
        Use of non-const rvalue reference instead

        Most uses of rvalue reference to modify the object being referenced

        Most rvalues are not const

       Guideline 2: No rvalue rerence as Function return type
       Core GuideLine f.45: Don't return a 'T&&'
       
       Return by value instead

       Rvalue reference often bind to temporaries, which don't outlive the function 

       int&& fun(){return 43;}

       void test(){
        int a = fun(): //Temporary is destroyed before vaolue is copied into "a"
       }
*/



void fun(int&& x){ /* use of x is lvalue*/ }

void gun(int&& y){ /* fun(y);  use of 'y' is lvalue*/ }

size_t size(){return 89; //rvalue  
}


int&& jun(){return 26;}
//return refernce to temporary 
//that will destroyed before copied

int main()
{
//   int lvalue; 
//   // int& nonConst_lvalueRef = 45; // Compile-time errror
//   int& nonConst_lvalueRef = lvalue;   // non-const lvalue reference


//   int variable; 
//   //fun(variable); //error: rvalue can't be bound to lvalue
//   fun(42); 
//   fun(size()); 

  int a = jun(); //Returning reference to a temporary 
  //Temporay is dstroyed before the value is copied into 'a'
    
}

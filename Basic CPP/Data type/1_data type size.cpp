#include<iostream>
#include<iomanip>
using namespace std;

void print();


int main()
{
    int Int;
    unsigned int A;

    short int sh;
    unsigned short int ush;

    long int a; // long a      // long int ===> int
    unsigned long int c; // unsigned long c

    long long int b; // long long b;
    unsigned long long int d; // unsigned long long d;



    // Printing the sizeof() of different data type;
    cout<< "size of int, long int, unsigned int/long = "<< sizeof(A)<< " Bytes " << endl ;
    cout<< "size of short int, unsigned short/short int  = "<< sizeof(ush)<< " Bytes " << endl ;
    cout<< "size of long long int ,long long , unsigned long long int/long long = "<< sizeof(b)<< " Bytes \n" << endl ;

    // boolean data type stores boolean or logical value (true,false);
    bool ans ;
    ans = true ; // ans = 1;
    cout<< "Boolean Variable "<< endl << "Ans = "<<(ans) << endl ;

    ans = false; // ans = 0;
    cout<< "Ans = "<<(ans) << endl<<endl ;

    // float point data type
    // We cann't use any type Modifier with float data type
    float flot;
    flot = 3.4 ;

    cout<< "Size of Float = " << sizeof(flot)<< " Bytes" << endl ;// sizeof(float)


    cout<< "Float point value = "<< flot << endl ;
    flot = 3.44444 ;
    cout<< "Float point value = "<< flot << endl ;
    flot = 3.444448 ;
    cout<< "Float point value = "<< flot << endl ;
    // cout can print upto 5 decimal place of float variable;
    // if decimal places are greater than 5 then it roundes up ;


    // Double floating point values
    cout<<endl<< "Double"<< endl ;
    double db;
    db = 7.87;
    cout<< "Double Floating point value = "<<(db) << endl;
    db = 7.87543;                                              // upto five decimal place
    cout<< "Double Floating point value = "<<(db) << endl;
    db = 7.875439;                                              // round up will take place in decimal number with more than 5 decimal place DecimalNumber
    cout<< "Double Floating point value = "<<(db) << endl;

    long double ldb = 8.999999;
    cout<< endl << "Long double" << endl ;
    cout<< ldb << endl ; // 9
    cout<< "Size of Long double  = "<< sizeof(ldb)<< " Bytes "<< endl<< endl ;



    short X = 10;
    short* p = &X; // &Vai_Name return address of variable

    cout << sizeof(*p)<< " "<< (&X) << endl ;

    cout<< "\n\t Data type and size the are allocted in Compute memory \n";
    print(); // printing the data type and memory size in byte they are allocated in computer memory ;







    return 0;
}
 void print()
 {
   short int a;
   unsigned short int b;

   int c;
   unsigned int d;

   long long int e;
   unsigned long long int f;

   char g;
   unsigned char gu;

   float h;

   double i;
   long double j;

   bool k;

   long int x;
   unsigned long int y;

   cout<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| Data Type"<<setw(15)<< left << "| Size in Byte" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| short "<<setw(7)<< left << "| " << sizeof(a)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| unsigned short "<<setw(7)<< left << "| " << sizeof(b)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

    cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| int "<<setw(7)<< left << "| " << sizeof(c)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

    cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| unsigned int "<<setw(7)<< left << "| " << sizeof(d)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

    cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| long int "<<setw(7)<< left << "| " << sizeof(x)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| unsigned long int "<<setw(7)<< left << "| " << sizeof(y)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| long long int"<<setw(7)<< left << "| " << sizeof(e)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| unsigned long long int"<<setw(7)<< left << "| " << sizeof(f)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| char "<<setw(7)<< left << "| " << sizeof(g)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| unsigned char "<<setw(7)<< left << "| " << sizeof(gu)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| float "<<setw(7)<< left << "| " << sizeof(h)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;


   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| double "<<setw(7)<< left << "| " << sizeof(i)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<< "\t"<<setw(25)<< setfill(' ')<< left<<"| long double "<<setw(6)<< left << "|" << sizeof(j)<<setw(7)<< "" <<"|"<<endl;
   cout<< "\t"<<setw(40)<<setfill('-')<<left <<" "<<endl;

   cout<<"\n\n\n\n";
   cin>> a;





 }


/*
  Data type: Restricts {To be stored} in the variable;
*/

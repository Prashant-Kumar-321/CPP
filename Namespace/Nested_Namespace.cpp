 #include<iostream>
 #include<conio.h>

 using namespace std;

//creating nested namespace;
 namespace A
 {
   int a = 33;

   namespace B
   {
    int b = 34;
   }
 }

 using namespace A;
 using namespace B;
 //using namespace A::B;

// Driver Code
int main()
{
  cout<< B::b <<endl;
  cout<< a <<endl;
  cout<< b <<endl;

  getch();
  return 0;
}

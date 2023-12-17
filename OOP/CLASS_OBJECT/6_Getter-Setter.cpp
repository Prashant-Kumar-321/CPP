#include<iostream>
#include<conio.h>

using namespace std;
class Addition
{
private:
    int x; // private member
    int y;

public:
    int getX() { return x;}// Getter function of x;
    int getY() { return y;} // Getter function of y;
    void setX(int a) {x = a;}// setter function of x;

    // constructor
    Addition(int a = 0, int b = 0) // Default Argument
    {
        x = a;
        y = b;
    }
};
/* Note
   x and y private variable are read only ;
*/

int main()
{

    Addition a(3,8);
    cout<< "x = "<< a.getX()<<endl ;
    cout<< "y = "<< a.getY()<< endl ;

    a.setX(34);// updatting the value of x;
    cout<< "x = "<< a.getX()<<endl ;

    getch();
    return 0;
}

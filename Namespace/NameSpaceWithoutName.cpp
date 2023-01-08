#include<iostream>
#include<conio.h>

using namespace std;


namespace
{
 int  x = 97;
}

int main()
{
    int x =90;

    cout<< ::x <<endl ;
    cout<< x <<endl ;


    getch();
    return 0;
}

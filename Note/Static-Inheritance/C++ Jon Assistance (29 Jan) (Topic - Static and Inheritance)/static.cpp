#include<iostream>
using namespace std;

void show()
{
    static int x = 10;
    int y = 20;

    cout<<"x = "<<x<<" , y = "<<y<<endl;

    x++;
    y++;
}

int main()
{
    show();
    show();
    show();

    return 0;
}

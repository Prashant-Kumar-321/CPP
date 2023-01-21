#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

// class complex

class Complex
{

    double real, img; //private instance variable

public:

    // setter function/////////////////////////////////////////////////////////////////////////////////////
    void setImgNumber()
    {
        cout<< "Enter complex Number : \n";
        cout<< "Real part : ";
        cin>> real;
        cout<< "Imaginary part without 'i' : ";
        cin>> img;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void getImgNumber()
    {
        char ope = (img<0) ? '-': '+';

        system("cls");
        cout<< "\n\n\n\tImaginary Number : " ;
        cout<<real << " "<< ope<< " i"<< abs(img)<< setw(15)<< "where i = "<< char(251)<< -1<< endl;
    }

};

double abs(double a)
{
    if(a<0)
        a*=-1;
    return a;
}

int main()
{
    Complex a;
    a.setImgNumber();
    a.getImgNumber();

    getch();
    return  0;
}
















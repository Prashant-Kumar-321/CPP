#include<iostream>
using namespace std;

int main()
{
    float a , b, c;

    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;

    try     // try block -->thow -->catch
    {
        if(b == 0)
            throw b;
        if( b == 1)
            throw "prateek jain";
        if(b == 2)
            throw 'a';
        c = a/b;
    }catch(float e)
    {
        cout<<"Divide by Zero Error b = "<<e<<endl;
    }
    catch(const char * s)
    {
        cout<<"Ye exception kisne send kiya = "<<s<<endl;
    }catch(...)
    {
        cout<<"Rajnikant is here"<<endl;
    }

    cout<<"Result  = "<<c<<endl;

    return 0;
}

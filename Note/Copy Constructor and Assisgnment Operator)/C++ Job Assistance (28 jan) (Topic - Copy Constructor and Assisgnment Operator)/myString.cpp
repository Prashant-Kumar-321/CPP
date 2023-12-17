#include<iostream>
#include<cstring>
using namespace std;

class myString
{
   private:
        char *str;
        int size;

   public:

        myString()
        {
            str = new char[1];
        }
        myString(const char *s)
        {
            size = strlen(s);
            str =  new char[size +1];
            strcpy(str , s);
        }

        ~myString()
        {
            delete [] str;
        }

        myString(const myString &s)
        {
            size = s.size;
            str =  new char[size +1];
            strcpy(str ,s.str);
        }

        myString & operator=(const myString &s)
        {
            if(this == &s)   //1 -> LHS == RHS
            {
                return *this;
            }
            delete []str;  //2 ->  Free Already Allocated

            size = s.size;
            str =  new char[size +1];
            strcpy(str ,s.str);

            return *this;  //3 ->  x = y = z
        }

        void display()
        {
            cout<<str<<endl;
        }

        void change(const char *s)
        {
            delete [] str;

            size = strlen(s);
            str = new char[size + 1];
            strcpy(str , s);
        }
};

int main()
{
    myString str1("Hello World");
    myString str2("jain");  // default constructor
    myString str3;
    str1.display();
    str2.display();

    str3 = str2 = str1;  // assignment operator
    str1.change("prateek");

    str1.display();
    str2.display();
    str3.display();

    return 0;
}

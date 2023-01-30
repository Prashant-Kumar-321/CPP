#include<iostream>
#include<cstring>

using namespace std;

class myString
{
  int size;
  char *str;

  public:
    myString(const char*s)
    {
      size = strlen(s);
      str = new char[size+1];

      strcpy(str,s);
    }
    myString()
    {
      size = 1;
      str = new char[size];
    }
    ~myString()
     {
       delete []str; // releasing memory allocated dyanamically with new
    }

    // copy constructor
    myString(const myString&s)
    {
      size = s.size;
      str = new char[size+1]; // dynamically creating char arry

      strcpy(str, s.str);
    }

    // assignment operator overloading
    myString& operator= (const myString&p)
    {
      if(this == &p)
        return *this;

      delete []str;
      size = p.size;
      str = new char[size+1];

      strcpy(str,p.str);

      return *this;
    }
    // Addition operator overloading
    myString operator+ (const myString&p)
    {
      myString temp;

      temp.size = size + p.size;
      temp.str = new char[temp.size+1];

      strcpy(temp.str, str);
      strcat(temp.str, p.str);

      return temp;
    }

    void display()
    {
      cout<< "String = "<< str<<" Size = "<< size <<  endl;
    }

};

// driver code
int main()
{
  myString name1("Prashant"), name3("Gupta");
  myString name2 = name1; // cpy constructor will be called

  name1.display();
  name2.display();
  name3.display();

  name3 = name1 + name2;
  name2 = name1;

  name1.display();
  name2.display();
  name3.display();


  return 0;
}



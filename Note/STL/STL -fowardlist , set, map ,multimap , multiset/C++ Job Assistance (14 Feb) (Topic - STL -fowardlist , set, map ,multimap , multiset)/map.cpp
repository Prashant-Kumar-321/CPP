#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    multimap <int , string> m;

    m.insert({1,"prateek jain"});  // operator[] is not overloaded

    m.insert(pair<int,string>(2, "9555031137"));

    m.insert({4, "bhopal"});

    m.insert({4,"Roorkee"});
    m.insert({3,"IIT Roorkee"});



    auto y = m.find(4);

    cout<<"Value = "<<y->second<<endl;

    if(m.count(5) == 0)
    {
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key Found"<<endl;
    }

   // m.erase(4);
    multimap<int,string>::iterator x;

    for(x = m.begin();  x != m.end() ; x++)
    {
        cout<<x->first<<"  "<<x->second<<endl;
    }

    return 0;
}

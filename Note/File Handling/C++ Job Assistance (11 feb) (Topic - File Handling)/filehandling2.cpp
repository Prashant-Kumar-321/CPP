#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("c:/file/abc.txt");

    if(!fin)
    {
        cout<<"File not open"<<endl;
    }
    else
    {
        string line;

        fin.seekg(4 , ios_base::beg);

        while(!fin.eof())
        {
            getline(fin,line);
            cout<<line<<" \n";
        }

    }

    fin.close();

    return 0;
}

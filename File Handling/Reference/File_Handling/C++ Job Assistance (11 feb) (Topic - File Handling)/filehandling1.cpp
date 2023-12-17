#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout1 , fout2;
    fout1.open("c:/file/abc.txt");

    if(!fout1 && !fout2)
    {
        cout<<"File not created"<<endl;
    }
    else
        {
            string line;
            cout<<"File Created successfully"<<endl;

            cout<<"Enter your data"<<endl;

            while(fout1)
            {
                getline(cin,line);

                if(line == "-1")
                    break;

                fout1<<line;
                fout1<<" \n";
            }
        }

        fout1.close();

    return 0;
}


// 1. create a file
// 2. Open that file
// 3. Write operation on the file
// 4. Closing that file

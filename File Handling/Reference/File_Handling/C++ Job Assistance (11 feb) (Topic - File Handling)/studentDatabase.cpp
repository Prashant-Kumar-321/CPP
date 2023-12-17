#include<iostream>
#include<fstream>

using namespace std;

int ID;
class Student
{
    public:

    int id;
    string name;
    int age;
    string stream;

    void addStudent()
    {
        cout<<"Enter name"<<endl;
        fflush(stdin); 
        getline(cin,name);
        cout<<"Enter your age"<<endl;
        cin>>age;
        cout<<"Enter your stream"<<endl;
        fflush(stdin); 
        getline(cin,stream);
        ID++;

        ofstream fout;
        fout.open("c:/file/student.txt", ios::app);
        fout<<"\n"<<ID;
        fout<<"\n"<<name;
        fout<<"\n"<<age;
        fout<<"\n"<<stream;
        fout.close();

        fout.open("c:/file/ID.txt",ios::app);
        fout<<"\n"<<ID;
        fout.close();

        cout<<"Record added successfully"<<endl;
    }

    void printAllStudent()
    {

    }

    void searchStudent(int id)
    {

    }

    void deleteStudent(int id)
    {

    }

    void updateStudent(int id)
    {

    }
};

int main()
{
    int choice;

    ifstream fin;
    fin.open("c:/file/id.txt");

    if(!fin)
    {
        cout<<"File Not Found"<<endl;
    }
    else
    {
        while(!fin.eof())
        {
            fin>>ID;
        }
    }

    fin.close();

    while(true)
    {
        cout<<"Enter your choice "<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Print all students"<<endl;
        cout<<"3. Search a student"<<endl;
        cout<<"4. Update a student"<<endl;
        cout<<"5. Delete a student"<<endl;

        cin>>choice;

        Student s;
        int id;

        switch(choice)
        {
        case 1:
                s.addStudent();
                break;
        case 2:
                s.printAllStudent();
                break;
        case 3:
                cout<<"Enter student id"<<endl;
                cin>>id;
                s.searchStudent(id);
                break;
        case 4:
                cout<<"Enter student id"<<endl;
                cin>>id;
                s.updateStudent(id);
                break;

        case 5:
                cout<<"Enter student id"<<endl;
                cin>>id;
                s.deleteStudent(id);
                break;

        default :
                return 0;
        }

    }

    return 0;
}

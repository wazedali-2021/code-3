#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    float marks;
public:

    student(string a,int b,float c)
    {
        name=a;
        roll=b;
        marks=c;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main()
{
    student obj("shovon",170,80);
    student *p;
    p=&obj;
    cout<<"using main value:"<<endl;
    obj.display();
    cout<<"using pointer:"<<endl;

    p->display();

    }

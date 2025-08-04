#include<iostream>
using namespace std;
class student
{
public:

    string name;
    int rollnumber;
    float marks;

    student(string a,int b,float c)
    {
        name=a;
        rollnumber=b;
        marks=c;
    }
    student(const student &obj)
    {
        name=obj.name;
        rollnumber=obj.rollnumber;
        marks=obj.marks;
    }
    void display()
    {
        cout<<"Name:"<<name<<"rollnumber:"<<rollnumber<<"marks:"<<marks<<endl;
    }
};
int main()
{
    student stdnt("shovon",170,80);
    student stdnt1=stdnt;
    stdnt.display();
}

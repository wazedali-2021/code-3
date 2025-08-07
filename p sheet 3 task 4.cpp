#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
public:
    point(int a,int b)
    {
        x=a;
        y=b;

    }
    point(const point &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    int getx()
    {
     return x;
    }
    int gety()
    {
        return y;
    }
    void display()
    {
        cout<<x<<","<<y<<endl;
    }

};
int main()
{
    point point1(10,5);
    point point2=point1;
    point1.display();
    point2.display();

}

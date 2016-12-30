#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point(){}
    Point(int x,int y):x(x),y(y){
    }
    int Getx(){return x;}
    int Gety(){return y;}
    void Setx(int x){this->x=x;}
    void Sety(int y){this->y=y;}
    void printIofo()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
  friend Point add(Point &p1,Point &p2);
};
Point add(Point &p1,Point &p2)
{
    Point n;
    n.Setx(p1.x+p2.x);
    n.Sety(p1.y+p2.y);
    return n;

}
int main(int argc,char** argv)
{
    Point p1(1,2);
    Point p2(2,4);
    Point sum = add(p1,p2);
    sum.printIofo();
    return 0;
}

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
  friend Point operator+(Point &p1,Point &p2);
  friend Point operator++(Point &p1);
  friend Point operator++(Point &p1,int a);

};
Point add(Point &p1,Point &p2)
{
    Point n;
    n.Setx(p1.x+p2.x);
    n.Sety(p1.y+p2.y);
    return n;

}
Point operator+(Point &p1,Point &p2)
{
    cout<<"operate+"<<endl;
    Point n;
    n.Setx(p1.x+p2.x);
    n.Sety(p1.y+p2.y);
    return n;

}
Point operator++(Point &p1)
{   cout<<"++p"<<endl;
    p1.x+=1;
    p1.y+=1;
    return p1;
}
Point operator++(Point &p1,int a)
{
    cout<<"p++"<<endl;
    Point n;
    n=p1;
    n.x+=1;
    n.y+=1;
    return n;
}
int main(int argc,char** argv)
{
    Point p1(1,2);
    Point p2(2,4);
    Point n = ++p1;
    n.printIofo();
    p1.printIofo();
    cout<<"-----------------"<<endl;
    Point m = p2++;
    m.printIofo();
    p2.printIofo();

    return 0;
}

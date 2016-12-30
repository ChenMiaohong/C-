#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point(){
    cout<<"Point()"<<endl;
    }
    Point(int x,int y):x(x),y(y){
     cout<<"Point(int x,int y):x(x),y(y)"<<endl;
    }
    Point(const Point &p)
    {
        cout<<" Point(const Point &p)"<<endl;
        x=p.x;
        y=p.y;
    }
    ~Point()
    {
        cout<<" ~Point()"<<endl;
    }
    int Getx(){return x;}
    int Gety(){return y;}
    void Setx(int x){this->x=x;}
    void Sety(int y){this->y=y;}
    void printIofo()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
    Point operator+(Point &p1)
    {
        cout<<"operate+"<<endl;
        Point n;
        n.x = this->x+p1.x;
        n.y = this->y+p1.y;
        return n;

    }
    Point& operator++(void)
    {   cout<<"operator++p"<<endl;
        this->x+=1;
        this->y+=1;
        return *this;
    }
    Point operator++(int a)
    {
        cout<<"operatorp++"<<endl;
        Point n;
        n=*this;
        this->x+=1;
        this->y+=1;
        return n;
    }
  friend Point add(Point &p1,Point &p2);
  friend ostream& operator<<(ostream &o,Point p);

};
Point add(Point &p1,Point &p2)
{
    Point n;
    n.Setx(p1.x+p2.x);
    n.Sety(p1.y+p2.y);
    return n;

}
ostream& operator<<(ostream &o,Point p)
{

    cout<<"x="<<p.x<<" y ="<<p.y<<endl;
    return o;
}

int main(int argc,char** argv)
{
    Point P1(1,2);
    Point P2(2,3);
    Point m,n;
    m=P1+P2;
    cout<<"p1+p2= "<<m<<endl;
    m=++P1;
    cout<<"m=++P1"<<m<<"p1 = "<<P1<<endl;
    cout<<"-----------------"<<endl;
    n = P1++;
    cout<<"n=++p1"<<n<<"p1 = "<<P1<<endl;
    cout<<"--------------------------"<<endl;
    cout<<m<<"   "<<n<<endl;

    return 0;
}



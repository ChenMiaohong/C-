#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Furniture{
private:
    int weight;
public:
     void setWeight(int weight){this->weight = weight;}
    int getWeight(void) const{return weight;}
    Furniture(){cout<<"my is Furniture's Constrcute"<<endl;}
};
class Vertification3c{
public:
    Vertification3c(){cout<<"my is Vertification3c's Constrcute"<<endl;}
};
class sofa:virtual public Furniture,virtual public Vertification3c{
private:
    int a;
public:
    void watchTV(void) {
        cout<<"watch tv"<<endl;
    }
   sofa(){cout<<"my is sofa's Constrcute"<<endl;}
};
class Bed:virtual public Furniture,virtual public Vertification3c{
private:
    int b;
public:
    void sleep(void){
        cout<<"sleep"<<endl;
    }
    Bed(){cout<<"my is Bed's Constrcute"<<endl;}


};
class Softbed:public sofa,public Bed{
private:
    int c;
public:
Softbed(){cout<<"my is Softbed's Constrcute"<<endl;}

};
class LeftRightCom{
public:
    LeftRightCom(){cout<<"my is LeftRightCom's Constrcute"<<endl;}

};
class Date{
public:
    Date(){cout<<"my is Date's Constrcute"<<endl;}
};
class Type{
    public:
    Type(){cout<<"my is Type's Constrcute"<<endl;}
};

class LeftRightSofabed:public Softbed,public LeftRightCom{
private:
    Date date;
    Type type;
};
int main(int argc,char **argv)
{
    LeftRightSofabed s;
    return 0;
}

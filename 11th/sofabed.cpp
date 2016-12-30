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

};
class sofa:virtual public Furniture{
private:
    int a;
public:
    void watchTV(void) {
        cout<<"watch tv"<<endl;
    }

};
class Bed:virtual public Furniture{
private:
    int b;
public:
    void sleep(void){
        cout<<"sleep"<<endl;
    }

};
class Softbed:public sofa,public Bed{
private:
    int c;

};

int main(int argc,char **argv)
{
    Softbed s;

    s.watchTV();
    s.sleep();
    s.sofa::setWeight(100);
    return 0;
}

#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Human{

public:
    virtual void eating(void){cout<<"use hand to eat"<<endl;}
    virtual ~Human(){cout<<"~Human"<<endl;}
    virtual Human* test(void){cout<<"Human's test"<<endl;
    return this;}
};
class Englishman:public Human{
public:
    void eating(void){cout<<"use fork to eat"<<endl;}
    virtual ~Englishman(){cout<<"~Englishman"<<endl;}
    virtual Englishman* test(void){cout<<"English's test"<<endl;
    return this;}
};
class Chinese:public Human{
public:
    void eating(void){cout<<"use chopstick to eat"<<endl;}
    virtual ~Chinese(){cout<<"~Englishman"<<endl;}
    virtual Chinese* teszt(void){cout<<"Chinese's test"<<endl;
    return this;}
};
class Guangximan:public Chinese{
public:
    void eating(void){
        cout<<"use chopsticks to eat,i come from guangxi"<<endl;
    }

};
void test_eating(Human &h)
{
    Englishman *pe;
    Chinese *pc;
    Guangximan *pg;
    h.eating();
    if(pe=dynamic_cast<Englishman*>(&h))
        cout<<"This human is Englishman"<<endl;
    if(pc=dynamic_cast<Chinese *>(&h))
        cout<<"This human is chinese"<<endl;
    if(pc=dynamic_cast<Guangximan *>(&h))
        cout<<"This human is Guangxi"<<endl;
}

int main(int argc,char **argv)
{
    Human h;
    Englishman e;
    Chinese c;
    Guangximan g;
    test_eating(h);
    test_eating(e);
    test_eating(c);
    test_eating(g);
    return 0;
}

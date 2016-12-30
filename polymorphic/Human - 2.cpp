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
    virtual Chinese* test(void){cout<<"Chinese's test"<<endl;
    return this;}
};
void test_eating(Human &h)
{
    h.eating();
}
void test_return(Human&h)
{
    h.test();
}
int main(int argc,char **argv)
{
    Human h;
    Englishman e;
    Chinese c;
    test_return(h);
    test_return(e);
    test_return(c);
    return 0;
}
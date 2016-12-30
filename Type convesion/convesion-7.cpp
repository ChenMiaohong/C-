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
    //Englishman &pe=dynamic_cast<Englishman&>(h);
    Chinese &pc=dynamic_cast<Chinese&>(h);
    Guangximan &pg=dynamic_cast<Guangximan&>(h);
    h.eating();
}

int main(int argc,char **argv)
{

    Guangximan g;

    test_eating(g);
    return 0;
}
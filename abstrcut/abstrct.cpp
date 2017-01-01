#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Human{

public:
    virtual void eating(void)=0;
    virtual void wearing(void)=0;
    virtual void driving(void)=0;
    virtual ~Human(){cout<<"~Human"<<endl;}
    virtual Human* test(void){cout<<"Human's test"<<endl;
    return this;}
};
class Englishman:public Human{
public:
    void eating(void){cout<<"use fork to eat"<<endl;}
    void wearing(void){cout<<"wear english style"<<endl;};
    void driving(void){cout<<"driver english car"<<endl;}
    virtual ~Englishman(){cout<<"~Englishman"<<endl;}
    virtual Englishman* test(void){cout<<"English's test"<<endl;
    return this;}
};
class Chinese:public Human{
public:
    void eating(void){cout<<"use chopstick to eat"<<endl;}
    void wearing(void){cout<<"wear Chinese style"<<endl;};
    void driving(void){cout<<"driver chines car"<<endl;}
    virtual ~Chinese(){cout<<"~Englishman"<<endl;}
    virtual Chinese* teszt(void){cout<<"Chinese's test"<<endl;
    return this;}
};
class Guangximan:public Chinese{
public:
    void eating(void){
        cout<<"use chopsticks to eat,i come from guangxi"<<endl;
    }
    void wearing(void){cout<<"wear Chinese style"<<endl;}
    void driving(void){cout<<"driver chines car"<<endl;}

};

int main(int argc,char **argv)
{
    Englishman e;
    Guangximan c;
    return 0;

}

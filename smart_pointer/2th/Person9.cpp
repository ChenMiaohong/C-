#include<iostream>
#include<string.h>
#include"RefBase.h"
using namespace std;
using namespace android::RSC;
class Person:public LightRefBase<Person>{
public:
    Person(){
        cout<<"Person()"<<endl;
    }
    ~Person()
    {
        cout<<"~Person()"<<endl;
    }
    void printInfo(void)
    {
        cout<<"just a test func"<<endl;
    }

};

template<typename T>
void test_func(sp<T> &other)
{
   sp<T> s=other;
    cout<<"test_func:"<<s->getStrongCount()<<endl;
   s->printInfo();
}
int main(int argc,char ** argv)
{
    int i;
    /*
    少用“Person”；用“sp”来代替“Person *”
    Person *per;
    有两种操作：per->XXXx,(*per).XXX
    sp也应该用这2种操作：
        sp->XXX,(*sp).XXX


    */
    /*相当于
    1.Preson *p =new Person();
    2.sp tmp(p);==>sp(Person *other)
    3.
    3.1sp other(tmp);==>sp(sp &other2)
    问题在于：sp &other2 = tmp;//错误语法。
                const sp& other2=tmp;//ok
    或3.2sp other(tmp==>Person*);==>sp(Person *other)
    */
    sp<Person> other = new Person();
    (*other).printInfo();
    cout<<"Before call test_func:"<<other->getStrongCount()<<endl;
    for(i=0;i<2;i++)
    {
         test_func(other);
         cout<<"After call test_func:"<<other->getStrongCount()<<endl;
    }

    return 0;
}




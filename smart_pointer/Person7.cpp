#include<iostream>
#include<string.h>
using namespace std;
class Refbase{
private:
    int count;
public:
    Refbase():count(0){}
    void incstrong(){
        count++;
    }
    void decstrong()
    {
        count--;
    }
    int getstrong()
    {
        return count;
    }
};
class Person:public Refbase{
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
class sp{
private:
    Person *p;
public:
    sp():p(0){

    }
    sp(Person *other){
        cout<<" sp(Person *other)"<<endl;
        p=other;
        p->incstrong();
    }
    sp(const sp &other){
        cout<<"sp(sp &other)"<<endl;
        p=other.p;
        p->incstrong();
    }
    ~sp(){
        cout<<"~sp()"<<endl;
        if(p)
        {
           p->decstrong();
           if(p->getstrong()==0)
           {
               delete p;
               p=NULL;
           }
           delete p;

        }

    }
    Person *operator->()
    {
        return p;
    }
    Person& operator*()
    {
        return *p;
    }
};
void test_func(sp &other)
{
   sp s=other;
    cout<<"test_func:"<<other->getstrong()<<endl;
   s->printInfo();
}
int main(int argc,char ** argv)
{
    int i;
    /*
    ���á�Person�����á�sp�������桰Person *��
    Person *per;
    �����ֲ�����per->XXXx,(*per).XXX
    spҲӦ������2�ֲ�����
        sp->XXX,(*sp).XXX


    */
    /*�൱��
    1.Preson *p =new Person();
    2.sp tmp(p);==>sp(Person *other)
    3.
    3.1sp other(tmp);==>sp(sp &other2)
    �������ڣ�sp &other2 = tmp;//�����﷨��
                const sp& other2=tmp;//ok
    ��3.2sp other(tmp==>Person*);==>sp(Person *other)
    */
    sp other = new Person();
    (*other).printInfo();
    cout<<"Before call test_func:"<<other->getstrong()<<endl;
    for(i=0;i<2;i++)
    {
         test_func(other);
         cout<<"After call test_func:"<<other->getstrong()<<endl;
    }

    return 0;
}




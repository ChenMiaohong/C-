#include<iostream>
#include<string.h>
using namespace std;
class Person{
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

void test_func()
{
    Person per;
    per.printInfo();
}
int main(int argc,char ** argv)
{
    int i;
    for(i=0;i<2;i++)
        test_func();
    return 0;
}




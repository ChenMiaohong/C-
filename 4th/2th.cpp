#include<stdio.h>
#include"2th.h"
namespace B {
void Person::setName(char *name)
{
    this->name = name;

}
int Person::setAge(int age)
{
    if(age<0||age>150)
    {
        this->age=0;
        return -1;
    }
    this->age=age;
    return 0;
}
void Person::printInfo(void)
{
    printf("name = %s,age = %d,work = %s",name,age,work);

}
void printVersion(void)
{
    printf("Person v1,by chen");
}
}




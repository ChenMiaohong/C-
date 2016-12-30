#include<stdio.h>
class Person{
private:
    char *name;
    int age;
    char *work;
public:
    void setName(char *name);
    int setAge(int age);
    void printInfo(void);
}

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
int main(int argc,char **argv)
{
    Person per;
    per.setName("zhangsan");
    per.setAge(10);
    per.printInfo();
    return 0;
}




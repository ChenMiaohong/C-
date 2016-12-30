#include<stdio.h>
class Person{
public:
    char *name;
    int age;
    char *work;
    void printInfo(void)
    {
        printf("name = %s,age = %d,work = %s",name,age,work);

    }

};
void printInfo(struct Person *per)
{
    printf("name = %s,age = %d,work = %s\n",per->name,per->age,per->work);
}

int main(int argc,char **argv)
{   int i;
    struct Person Person[] = {
    {"zhangsan",18,"tea"},
    {"lisi",28,"doctor"},
    };
    for(i=0;i<2;i++)
    Person[i].printInfo();
}



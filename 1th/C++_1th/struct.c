#include<stdio.h>
struct person{
    char *name;
    int age;
    char *work;
};
int main(int argc,char **argv)
{   int i;
    struct person person[] = {
    {"zhangsan",18,"tea"},
    {"lisi",28,"doctor"},
    };
    for(i=0;i<2;i++)
    printf("name=%s,age = %d,work = %s\n",person[i].name,person[i].age,person[i].work);
}

/*显式类型转换*/
#include<stdio.h>
int main(int argc,char **argv)
{
    double d=100.1;
    int i=d;
    char *str = "100ask.taobao.com";
    int *p=str;
    printf("i=%d,str=0x%x,p=0x%x",i,(unsigned int)str,(unsigned int)p);
    return 0;
}

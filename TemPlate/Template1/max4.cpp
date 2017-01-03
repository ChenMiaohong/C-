#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
template<typename T>
const T& mymax(const T& a,const T& b)
{
   cout<<__PRETTY_FUNCTION__<<endl;
   return (a<b)?b:a;
}
template<typename T>
const T* mymax2(const T* a,const T* b)
{
   cout<<__PRETTY_FUNCTION__<<endl;
   return (a<b)?b:a;
}
template<typename T>
void test_func(T f)
{
   cout<<__PRETTY_FUNCTION__<<endl;
}
int f1(int a,int b)
{
    return 0;
}
int main(int argc,char** argv)
{
    int ia = 1;
    int ib  = 2;
    char a[]="ab";
    char b[]="cd";
    mymax(a,b);
    mymax2(a,b);
    char a2[]="abc";
    char b2[]="cd";
    //mymax(a2,b2);传入的参数是char4，char3，无法推倒出T：mymax（char&[4],char[3]）
    mymax2(a2,b2);//mymax2(char[4,char[3]]),推导出：mymax2（const char*,const char *）
    test_func(f1);
    test_func(&f1);
    return 0;
}

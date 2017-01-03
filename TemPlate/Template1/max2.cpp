#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
template<typename T>
T& mymax(T& a,T& b)
{
   cout<<__PRETTY_FUNCTION__<<endl;
   return (a<b)?b:a;
}
void add(int a,int b)
{
    cout<<"add(int a,int b)="<<(a+b)<<endl;
}
int main(int argc,char** argv)
{
    const int ia = 1;
    const int ib  = 2;
    mymax(ia,ib);
    int a=1;
    double b=2.1;
    add(a,b);
    return 0;
}

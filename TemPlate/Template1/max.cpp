#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
template<typename T>
T& mymax(T& a,T& b)
{
   return (a<b)?b:a;
}
int main(int argc,char** argv)
{
    int ia = 1,ib = 2;
    float fa = 1.2,fb = 2.2;
    double da = 1.5,db = 3.5;
    mymax(ia,ib);
    mymax(fa,fb);
    mymax(da,db);
    return 0;
}

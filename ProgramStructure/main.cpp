#include<stdio.h>
#include"2th.h"
#include"Dog.h"
int main(int argc,char **argv)
{  
   B::Person per;
   per.setName("chen");
   per.setAge(10);
   per.printInfo();
   A::Dog der;
   der.setName("wangcai");
   der.setAge(18);
   der.printInfo();
 
   A::printVersion();
   B::printVersion();

    return 0;
}





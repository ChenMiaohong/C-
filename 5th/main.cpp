#include<stdio.h>
#include"2th.h"
#include"Dog.h"
/*global namespace*/
    //put A::Dog in the global namespace
    using A::Dog;
    using B::Person;

int main(int argc,char **argv)
{  
    /*local namespace*/

    Person per;
    per.setName("chen");
    per.setAge(10);
    per.printInfo();
   
    Dog der;
    der.setName("wangcai");
    der.setAge(18);
    der.printInfo();
 
   A::printVersion();
   B::printVersion();

    return 0;
}





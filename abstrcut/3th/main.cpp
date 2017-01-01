#include"Englishman.h"
#include"Chinese.h"
int main(int argc ,char** argv)
{
    Englishman e;
    Chinese c;
    e.setname("chen");
    c.setname("zhangsan");

    e.eating();
    c.eating();
}

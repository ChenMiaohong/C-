#ifndef _HUMAN_H
#define _HUMAN_H
// _CHINESE_H
#include<unistd.h>
#include<iostream>
#include<string>
using namespace std;
class Human{
private:
    char *name;
public:
    void setname(char *name);
    char *getname(void);
};
#endif

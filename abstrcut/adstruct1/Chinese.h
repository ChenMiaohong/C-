#ifndef _CHINESE_H
#define _CHINESE_H
#include<unistd.h>
#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
class Chinese:public Human
{
public:
    void eating(void);
    void wearing(void);
    void driving(void);
    ~Chinese();

};
#endif

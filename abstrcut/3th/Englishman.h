#ifndef _ENGLISHMAN_H
#define _ENGLISHMAN_H
// _CHINESE_H
#include<unistd.h>
#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
class Englishman:public Human
{

public:

    void eating(void);
    void wearing(void);
    void driving(void);
    ~Englishman();

};
#endif

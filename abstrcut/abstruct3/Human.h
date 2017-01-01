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
    virtual void eating(void)=0;
    virtual void wearing(void)=0;
    virtual void driving(void)=0;
	virtual ~Human(){
		cout<<"~Human()"<<endl;
	}
};
Human& CreateEnglishman(char *name,int age,char *address);
Human& CreateChinese(char *name,int age,char *address);
#endif

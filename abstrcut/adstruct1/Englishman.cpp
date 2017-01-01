#include"Englishman.h"
#include"string.h"
void Englishman ::eating(void)
{
    cout<<"use fork to eat"<<endl;
}
void Englishman::wearing(void)
{
    cout<<"wear english style"<<endl;
}
void Englishman::driving(void)
{
    cout<<"driver english car"<<endl;
}
Englishman::~Englishman(){
    cout<<"~English()"<<endl;
}
Englishman::Englishman(){} 
Englishman::Englishman(char *name,int age,char *address){
	setname(name);
	this->age = age;
	memset(this->address,0,100);
	strcpy(this->address,address);
	
}


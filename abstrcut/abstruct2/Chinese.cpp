#include"Chinese.h"
void Chinese ::eating(void)
{
    cout<<"use chopsticks to eat"<<endl;
}
void Chinese::wearing(void)
{
    cout<<"wear english style"<<endl;
}
void Chinese::driving(void)
{
    cout<<"driver english car"<<endl;
}
Chinese::~Chinese(){
cout<<"~Chinese()"<<endl;
}
Human& CreateChinese(char *name,int age,char *address)
{
	return *(new Chinese());
}

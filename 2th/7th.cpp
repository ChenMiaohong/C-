#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    char *name;
    int age;
    char *work;
public:
    Person(){//cout<<"Person()"<<endl;
	name = NULL;
	work =NULL;
    }
    Person(char *name)
    {
	//cout<<"Person(char)"<<endl;
	this->name = new char[strlen(name)+1];
	strcpy(this->name,name);
	this->work = NULL;
    }
    Person(char *name,int age,char *work = "none")
    {
	cout<<"Person(char,int),name = "<<name<<",age = "<<age<<",work = "<<work<<endl;
	this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
	    
	this->age = age;
	this->work = new char[strlen(work)+1];
        strcpy(this->work,work);
    }
    Person(Person &per)
    {
	cout<<"Person(Peson &)"<<endl;
	this->age = per.age;
	
	this->name = new char[strlen(per.name)+1];
	strcpy(this->name,per.name);
	
	this->work = new char[strlen(per.work)+1];
	strcpy(this->work,per.work);

    }
    void setName(char *name)
    {
	this->name = name;
    }
    int setAge(int age)
    {
	if(age<0||age>150)
	{
	    this->age=0;
	    return -1;
	}
	this->age=age;
	return 0;
    }
    ~Person()
    {	
	cout<<"~Person()"<<endl;
	if(this->name)
	{
	    cout<<"name = "<<this->name<<endl;
	    delete this->name;
	} 
	if(this->work)
	{
	    cout<<"work = "<<this->work<<endl;
	    delete this->work;
	}
    }
    void printInfo(void)
    {
	//printf("name = %s,age = %d,work = %s",name,age,work);
	cout<<"name = "<<name<<",age = "<<age<<",work = "<<work<<endl;
    }
};
void  test_fun()
{
    Person per("zhangsan",16);
    Person per2(per);
    //delete per7;
    per2.printInfo();
}
Person per_glob("per_g",10);
void fun()
{
    Person per_func("per_func",11);
    static Person Per_func_s("per_func_s",11);

}
int main(int argc,char ** argv)
{   
    Person per_main("per_main",11);
    static Person per_main_s("per_main_s",11);
    for(int i=0;i<2;i++)
    {
	fun();
	Person per_for("per_for",i);	

    }
    
    return 0;
}




#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    static int count;
    char *name;
    int age;
    char *work;
public:
    static int Getcount()
    {
        return count;
    }
    Person(){//
    cout<<"Person()"<<endl;
	name = NULL;
	work = NULL;
	count++;
    }
    Person(char *name)
    {
	//cout<<"Person(char)"<<endl;
	this->name = new char[strlen(name)+1];
	strcpy(this->name,name);
	this->work = NULL;
	count++;
    }
    Person(char *name,int age,char *work = "none")
    {
	cout<<"Person(char,int),name = "<<name<<",age = "<<age<<",work = "<<work<<endl;
	this->name = new char[strlen(name)+1];
        strcpy(this->name,name);

	this->age = age;
	this->work = new char[strlen(work)+1];
        strcpy(this->work,work);
        count++;
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
int Person::count=0;
int main(int argc,char ** argv)
{
    Person per1;
    Person per2;
    Person per3;
    Person per4;
    Person *per5=new Person[10];
    cout<<"count = ,"<<Person::Getcount()<<endl;



    return 0;
}




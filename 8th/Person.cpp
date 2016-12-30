#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    static int count;
    char *name;
    int age;
public:
    static int Getcount();

    Person(){//
    cout<<"Person()"<<endl;
	name = NULL;
	count++;
    }
    Person(char *name)
    {
	//cout<<"Person(char)"<<endl;
	this->name = new char[strlen(name)+1];
	strcpy(this->name,name);
	count++;
    }
    Person(char *name,int age)
    {
	cout<<"Person(char,int),name = "<<name<<",age = "<<age<<endl;
	this->name = new char[strlen(name)+1];
        strcpy(this->name,name);

	this->age = age;

        count++;
    }
    Person(const Person &per)
    {
        cout<<"Person(Peson &)"<<endl;
        this->age = per.age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void setName(char *name)
    {
        if(this->name)
        {
            delete name;
        }
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
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
    }
    void printInfo(void) const
    {
        cout<<"name = "<<name<<",age = "<<age<<endl;
    }

};
int Person::count=0;
int Person::Getcount()
{
    return count;
}
class Student:public Person{



};
int main(int argc,char ** argv)
{
    Student s;
    s.setName("zahngsan");
    s.setAge(16);
    s.printInfo();
    return 0;
}




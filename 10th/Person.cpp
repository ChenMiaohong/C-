#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
    int adress;
    Person(){//
    cout<<"Person()"<<endl;
	name = NULL;

    }
    Person(char *name)
    {
	//cout<<"Person(char)"<<endl;
	this->name = new char[strlen(name)+1];
	strcpy(this->name,name);

    }
    Person(char *name,int age)
    {
	cout<<"Person(char,int),name = "<<name<<",age = "<<age<<endl;
	this->name = new char[strlen(name)+1];
        strcpy(this->name,name);

	this->age = age;


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
    void printInfo(void)
    {
        cout<<"name = "<<name<<",age = "<<age<<endl;
    }

};
class Student:public Person{
private:
        int grade;
        void setGrade(int grade){this->grade= grade;}
        int getGrade(void){return grade;}

        void printInfo()
        {
            cout<<"Student"<<endl;
            Person::printInfo();
        }
};
void test_func(Person &p)
{
    p.printInfo();
}
int main(int argc,char ** argv)
{
    Person p("list",16);
    Student s;
    s.setName("zahngsan");
    s.setAge(16);
    test_func(p);
    test_func(s);
    return 0;
}




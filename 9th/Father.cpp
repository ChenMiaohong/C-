#include<iostream>
#include<string.h>
#include<unistd.h>
using namespace std;
class Father{
private:
    int money;
protected:
    int room_key;
public:
    int address;
    void it_skill(void)
    {
        cout<<"father's it skill"<<endl;
    }
    int  getMoney(void)
    {
        return money;
    }
    void setMoney(int money)
    {
        this->money=money;
    }
};
class Son_pub:public Father{
private:
    int toy;
public:
    void play_game(void)
    {
        cout<<"son paly game"<<endl;
        room_key=1;

    }
    void it_skill(void)
    {
        cout<<"son it kill"<<endl;
    }

};
class Son_pro:protected Father{
private:
    int toy;
    //using Father:: void it_skill(void)
public:
    using Father::room_key;
    void play_game(void)
    {
        cout<<"son paly game"<<endl;
        room_key=1;

    }


};
class Son_pri:private Father{
private:
    int toy;
    //using Father:: void it_skill(void)
public:
    using Father::room_key;
    void play_game(void)
    {
        cout<<"son paly game"<<endl;

    }


};
class Gran_pub:public Son_pub{

public:
    void test(void)
    {

        room_key=1;
         address = 5;
        cout<<"son paly game"<<endl;

    }


};
class Gran_pro:public Son_pro{

public:
    void test(void)
    {

        room_key=1;
        address = 1;
        cout<<"ganson pro"<<endl;
    }
};
class Gran_pri:public Son_pri{

public:
    void test(void)
    {

        //room_key=1;
        //address = 1;
        cout<<"gnad pri"<<endl;
    }
};
int main()
{
    Son_pub s_pub;
    Son_pro s_pro;
    Son_pri s_pri;

    s_pub.play_game();
    s_pro.play_game();
    s_pri.play_game();

    s_pub.it_skill();
    //s_pro.it_skill();
    //s_pri.it_skill();
    return 0;
}

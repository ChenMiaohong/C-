#include"Human.h"
void test_eating(Human *h){
    h->eating();

}
int main(int argc ,char** argv)
{
    Human& e=CreateEnglishman("cgh",12,"sdfdfg");
	Human& c=CreateChinese("zhang",11,"ds");
    Human *h[2]={&e,&c};
    int i;
    for(i=0;i<2;i++)
        test_eating(h[i]);

    return 0;
}

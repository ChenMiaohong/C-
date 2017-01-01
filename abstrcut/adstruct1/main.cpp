#include"Englishman.h"
#include"Chinese.h"
#include"Human.h"
void test_eating(Human *h){
    h->eating();

}
int main(int argc ,char** argv)
{
    Englishman e("chen",10,"fghjkl;'");
    Chinese c;
    Human *h[2]={&e,&c};
    int i;
    for(i=0;i<2;i++)
        test_eating(h[i]);

    return 0;
}

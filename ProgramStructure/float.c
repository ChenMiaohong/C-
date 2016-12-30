#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a = 102.56;
    char buf[100];
    char duf[100];
     char suf[100];
    int i,sl;
    //float b=(a-(int)a);
    sprintf(buf,"%.2f",a);
    char *sel="asdf";
    char *b;
    for(i=0;*(buf+i)!='\0';i++)
	{	int j;
		j=i%4;
		*(duf+i)=*(buf+i)^*(sel+j);

	}
	sl=i;
	  printf("%s\n",duf);
	for(i=0;i<sl;i++)
	{	int j;
		j=i%4;
		*(suf+i)=*(duf+i)^*(sel+j);
	}

	float f1 = strtof(suf,&b);
    printf("%.2f\n",f1);

    printf("\r");
     printf("-----------\r-----------\n");
    printf("\r\n");
     printf("----------------------\n");
    printf("\r\t");


}


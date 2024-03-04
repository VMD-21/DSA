#include<stdio.h>

int main()
{
 int m1,m2,m3,m4,m5,avg;
 printf("enter the marks scored in 5 subjects:\n");
 scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
 avg=(m1+m2+m3+m4+m5)/5;
 printf("average of marks=%d",avg);
}

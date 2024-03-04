
#include<stdio.h>

int main()
{
 int a,b;
 printf("enter the value a,b:\n");
 scanf("%d %d",&a,&b);
 
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swaping a=%d and b=%d",a,b);
}

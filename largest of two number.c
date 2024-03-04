#include<stdio.h>

int main()
{
 int a,b,largest;
 printf("enter the value a,b=\n");
 scanf("%d %d",&a,&b);
 if(a>b)
 {
  largest=a;
  printf("largest number=%d",largest);
 }
 else
 {
  largest=b;
  printf("largest number=%d",largest);
 }
}

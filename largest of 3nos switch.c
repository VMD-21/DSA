#include<stdio.h>

int main()
{
 int a,b,c;
 printf("enter the 3 nos\n");
 scanf("%d%d%d",&a,&b,&c);
 switch(a>b)
 {
  case 1:
         if(a>c)
         {
          printf("%d is the largest",a);
         }
         else
         {
          printf("%d is the largest",c);
         }
         break;
  case 0:
         if(b>c)
        {
        printf("%d is the largest",b);
        }
        else
        {
        printf("%d is the largest",c);
        }
        break;
 }
}

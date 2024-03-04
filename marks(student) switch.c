#include<stdio.h>

int main()
{
 int m;
 printf("enter the marks\t");
 scanf("%d",&m);
  switch(m)
  {
   case 0 ... 39: printf("fail");
                  break;
   case 40 ... 59: printf("second class");
                   break;
   case 60 ... 79: printf("first class");
                   break;
   case 80 ... 100: printf("distinction");
                    break;
            default:printf("invalid marks");
  }
}

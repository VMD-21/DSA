#include<stdio.h>

 int main()
 {
  int m;
  printf("enter the marks=\t");
  scanf("%d",&m);
  if(m>=0 && m<=39)
  {
   printf("fail");
  }
  else if(m>=40 && m<=59)
  {
   printf("second class");
  }
  else if(m>=60 && m<=79)
  {
   printf("first class");
  }
  else if(m>=80 && m<=100)
  {
   printf("distinction");
  }
  else
  {
   printf("invalid marks");
  }
 }

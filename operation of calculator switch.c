#include<stdio.h>
int main()
{
    char ch;
    float n1,n2,sum,sub,mul,div;
    printf("enter the value\n");
    printf("enter the choice\n");
    scanf("%f%f%c%c",&n1,&n2,&ch);
    switch(ch)
    {
     case '+':sum=n1+n2;
     printf("sum=%f\n",sum);
     break;
     case '-':sub=n1-n2;
     printf("sub=%f\n",sub);
     break;
     case '*':mul=n1*n2;
     printf("mul=%f\n",mul);
     break;
     case '/':div=n1/n2;
     printf("div=%f\n",div);
     break;
     default:printf("invalid choice\n");
     break;
    }
}


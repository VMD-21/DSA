#include<stdio.h>
 int main()
 {
  float p,t,r,si,t_amt;
  printf("enter the value of p,t,r:\n");
  scanf("%f %f %f",&p,&t,&r);
  si=(p*t*r)/100;
  t_amt=si+p;
  printf("total amount=%f\n simple interest=%f",t_amt,si);
 }

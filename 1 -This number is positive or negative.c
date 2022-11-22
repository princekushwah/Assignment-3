//1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number\n");
 scanf("%d",&num);
 if(num>0)
  printf(" %d This number is positive",num);
 else if(num<0)
  printf("%d This number is negative",num);
 else
   printf("This is Zero");
   getch();
   return 0;
}

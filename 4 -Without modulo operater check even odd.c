//Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number \n");
 scanf("%d",&num);
 if(num&1==1)
    printf("This is odd number");
 else
    printf("This is even number ");
  getch();
  return 0;
}

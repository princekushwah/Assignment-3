//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
if((num%5)==0)
 printf("This number is divisible by 5");
else
printf("This number is not divisible by 5 ");
getch();
return 0;
}

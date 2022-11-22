//Write a program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main()
{

int num;
printf("Enter a number\n");
scanf("%d",&num);
if(num>99&&num<1000)
    printf(" %d : This number is three digit number",num);
else
    printf("%d : This number is not Three digit",num);
    getch();
    return 0;

}

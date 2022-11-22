//Write a program to print greater between two numbers. Print one number if both are the same.
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two number\n");
scanf("%d%d",&num1,&num2);
if(num1>num2)
    printf(" %d : This number is greater ",num1);
else if(num1==num2)
    printf("Both are equal : %d ",num2);
else
    printf(" %d : This number is greater",num2);
    getch();
    return 0;
}

//Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number to ckeck even odd\n");
 scanf("%d",&num);
 if(num%2==0)
    printf(" %d : This is even number",num);
 else
    printf(" %d : This is odd number",num);
 getch();
 return 0;

}

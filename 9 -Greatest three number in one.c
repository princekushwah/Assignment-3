/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
int a,b,c;
    printf("Enter a number to check greatest\n");
    scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
    printf("%d : This number is greatest",a);
else if((b>a)&&(b>c))
    printf("%d : This number is geratest",b);
else if((a==b)||(b==c)||(a==c))
    printf(" %d : Greatest number is reapeted",a);
else
    printf(" %d : This number is greatest",c);
 getch();
 return 0;
}

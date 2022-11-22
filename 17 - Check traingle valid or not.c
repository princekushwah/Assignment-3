#include<stdio.h>
int main()
{
    int a, b, c;
   printf("Enter traingle sides :");
    scanf("%d%d%d",&a,&b,&c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
       printf("Valid Traingle");
   else
     printf("Invalid Traingle");
     getch();
     return 0;
}


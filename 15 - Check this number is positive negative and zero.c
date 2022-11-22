#include<stdio.h>
int main()
{
int num;
printf("Enter a number to check this number is positive nagative and zero : ");
scanf ("%d",&num);
if(num>0)
  printf("%d This number is Positive ",num);
else if(num<0)
  printf("%d This number is Negative ",num);
else
   printf("This number is zero");
   getch();
   return 0;
}

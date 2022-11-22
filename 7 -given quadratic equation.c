/*write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
double dis,a,b,c;
    printf("Enter coefficent a,b and c\n");
    scanf("%1f%1f%1f",&a,&b,&c);
    dis= b*b*4*a*c;
if(dis>0)
    printf("This quadratic equation are real");
else if(dis==0)
    printf("This quadratic equation are equal");
else if(dis<0)
    printf("This quadratic equation are nagative");
getch();
return 0;


}

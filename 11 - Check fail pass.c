#include<stdio.h>
int main()
{
 int m1, m2, m3, m4, m5, tot;
  float per;
 printf("Enter Marks of Five Subjects:\n");
     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
     tot = m1+m2+m3+m4+m5;
     printf("Total Marks of Student = %d\n",tot);
     if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
     {
          printf("Student is PASS\n");
          per= tot/5.0;
          printf("\nPercentage of a Student = %.2f",per);
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}

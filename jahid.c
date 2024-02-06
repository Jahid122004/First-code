#include<stdio.h>
int main ()
{
int marks;
printf("%d", marks);
scanf("%d", & marks);

if (marks > 30){
printf("student passed the exam \n");
}
else {
printf("student failed the exam\n");
}
printf(" Thank you ");
return 0;
}
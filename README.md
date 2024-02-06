#include<stdio.h.>
int main ()
{
    int a;
    printf("enter the number ");
    scanf("%d", &a);
    int sum =0;
    int i=1;
    while(i<=a)
    {
        sum=sum+i;
        printf("%d", i);
    }
    return 0;
}

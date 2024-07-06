//add functio9n in c
#include<stdio.h>
int sum(a,b);
int main()
{
    int a,b,s;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("the sum is:%d",s);
    return 0;
}
int sum(a,b)
{
    return a+b;
}
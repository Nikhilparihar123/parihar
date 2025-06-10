#include<stdio.h>
int main() 
{
int n,r,sum=0;
printf("enter the number n =");
scanf("%d",&n);
for(n;n!=0;n=n/10)
{
    r=n%10;
    sum=sum+r;                         
}
printf("sum of digitsis %d",sum);
return 0;
}

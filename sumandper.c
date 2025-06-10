#include<stdio.h>
int main()
{
int physics,chemistry,math,biology,pps,sum;
float per;
printf("Enter the number of physics =");
scanf("%d",&physics);
printf("Enter the number of chemistrys =");
scanf("%d",&chemistry);
printf("Enter the number of math =");
scanf("%d",&math);
printf("Enter the number of biology");
scanf("%d",&biology);
printf("Enter the marks of pps\n =");
scanf("%d",&pps);
sum=physics+chemistry+math+biology+pps;
printf("the total marks are %d\n",sum);
per=sum/5;
printf("percentage of the marks is %f\n",per);
return 0;
}

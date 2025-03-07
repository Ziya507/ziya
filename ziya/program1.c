#include<stdio.h>
#include<math.h>
int main()
{
double x,y,z,w,result;
printf("enter value for x:");
scanf("%lf",&x);
printf("enter value for y:");
scanf("%lf",&y);
printf("enter value for z:");
scanf("%lf",&z);
printf("enter value for w:");
scanf("%lf",&w);
result=(pow(x+y,2)*(x+z))/w;
printf("the result is:%.2lf\n",result);
return 0;
}



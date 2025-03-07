#include<stdio.h>
int main()
{
int totDays,mon,remDays;
printf("Enter the total number of days:");
scanf("%d",&totDays);
mon=totDays/30;
remDays=totDays%30;
printf("%d days=%d months and %d days/n",totDays,mon,remDays);
return 0;
}

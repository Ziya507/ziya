#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,disc,root1,root2,realPart,imaginaryPart;
printf("enter coefficients a,b and c:");
scanf("%f%f%f",&a,&b,&c);
disc=b*b-4*a*c;
if(disc>0)
{
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("Roots arereal and different.\n");
printf("Roots=%.2f\n",root1);
printf("Root2=%.2f\n",root2);
}
else if(disc==0)
{
root1=-b/(2*a);
printf("Roots are real and the same.\n");
printf("Root1=Root2=%.2f\n",root1);
}
else
{
realPart=-b/(2*a);
imaginaryPart=sqrt(-disc)/(2*a);
printf("Roots are complex and different.\n");
printf("Root1=%.2f+%.2fi\n",realPart,imaginaryPart);
printf("Root2=%.2f-%.2fi\n",realPart,imaginaryPart);
}
return 0;
}


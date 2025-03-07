#include<stdio.h>
int main()
int m,n,i,j;
printf("enter the number of rows and columns:");
scanf("%d%d",&m,&n);
int matrix1[m][n],matrix2[m][n],diff[m][n];
printf("enter elements of matrix1:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&matrix1[i][j]);
}
}
printf("enter elements of matrix2:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
diff[i][j]=matrix1[i][j]-matrix2[i][j];
}
}
printf("Difference of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",diff[i][j]);
}
printf("\n");
}
return 0;
}

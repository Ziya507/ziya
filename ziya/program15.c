#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the number of rows and columns:");
scanf("%d%d",&m,&n);
int matrix1[m][n],matrix[m][n],sum[m][n];
printf("Enter element of matrix 1;\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf(%d",&matrix[i][j]);
}
}
printf("Enter element of matrix 2;\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf(%d",&matrix2[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{



sum[i][j]=matrix1[i][j]+matrix2[i][j];
}
}
printf("sum of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf(%d",sum[i][j]);
}
printf("\n");
}
return 0;
}


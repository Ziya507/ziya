#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int*p=arr;
printf("Address of arr:%p\n",arr);
printf("Value at *p:%d\n",*p);
p++;
printf("After P++,Value at *p:%d\n",*p);
p=arr+2;
printf("After p=arr+2,Value at *p:%d\n",*p);
printf("Difference in indices(p-arr):%ld\n",p-arr);
if(p>arr)
printf("Pointer p is ahead of arr\n");
return 0;
}

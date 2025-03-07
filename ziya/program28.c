#include<stdio.h>
void swapPointers(int **p1, int **p2)
{
int *temp = *p1;
*p1 = *p2;
*p2 = temp;
}
int main() {
int a = 10, b = 20;



int *ptr1 = &a, *ptr2 = &b;
printf("Before swap: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);
swapPointers(&ptr1, &ptr2);
printf("After swap: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);
return 0;
}

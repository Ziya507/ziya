#include<stdio.h>
struct Student
{
char name[50];
int age;
float marks;
};
void display(struct Student*s)
{
printf("\nStudent Details:\n");
printf("Name:%s\n",s->name);
printf("Age:%d\n",s->age);
printf("Marks:%2f\n",s->marks);
}
int main()
{
struct Student s1,*ptr;
ptr=&s1;
printf("Enter student details:\n");
printf("Name: ");
scanf("%[^\n]",ptr->name);
printf("Age: ");
scanf("%d",&ptr->age);
printf("Marks: ");
scanf("%f",&ptr->marks);
display(ptr);
return 0;
}

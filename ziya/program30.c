#include<stdio.h>
void insert(int *arr, int *size, int pos, int value) {
if (pos < 0 || pos > *size) {
printf("Invalid position!\n");
return;


}
for (int i = *size; i > pos; i--) {
*(arr + i) = *(arr + i - 1);
}
*(arr + pos) = value;
(*size)++;
}
void delete(int *arr, int *size, int pos) {
if (pos < 0 || pos >= *size) {
printf("Invalid position!\n");
return;
}
for (int i = pos; i< *size - 1; i++) {
*(arr + i) = *(arr + i + 1);
}
(*size)--;
}
int search(int *arr, int size, int value) {
for (int i = 0; i < size; i++) {
if (*(arr + i) == value) return i;
}
return -1;
}
void display(int *arr, int size) {
for (int i = 0; i < size; i++) {
printf("%d", *(arr + i));
}
printf("\n");
}
int main() {
int arr[100], size, choice, pos, value;
printf("Enter array size: ");



scanf("%d", &size);
printf("Enter %d elements: ", size);
for (int i = 0; i< size ;i++) {
scanf("%d", (arr + i));
}
while (1) {
printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nEnter choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter position and value to insert: ");
scanf("%d %d", &pos, &value);
insert(arr, &size, pos, value);
break;
case 2:
printf("Enter position to delete: ");
scanf("%d", &pos);
delete(arr, &size, pos);
break;
case 3:
printf("Enter value to search: ");
scanf("%d", &value);
pos = search(arr, size, value);
if (pos != -1) printf("Found at index %d\n", pos);
else printf("Not found\n");
break;
case 4:
display(arr, size);
break;
case 5:
return 0;
default:



printf("Invalid choice!\n");
}
}
}

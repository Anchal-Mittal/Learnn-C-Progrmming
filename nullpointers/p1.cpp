#include<stdio.h>
int main()
{
int * ptr = NULL;
//printf("%d",*ptr);RUN TIME WHILE DEREFRENCING POINTER THAT POINT TO NULL
void *ptr1 =NULL;
int **ptr2=&ptr;//type casting of pointers
printf("\n %d",sizeof(ptr1));//size of void pointer is 4
printf("\n %d",sizeof(void));// size of void is 1
printf("\n %d",*ptr2);// print 0 bcz ptr does not contain any address
//printf("\n %d", **ptr2);//can not dereferencing pointer that points to NULL
return 0;
}

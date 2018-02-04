#include<stdio.h>
int main()
{
	int a[3] = {1, 3,6};
	void *ptr = &a;//void type pointers
    // printf("%d \n",*ptr);can not deferencing void pointer
    printf("%d \n",*(int *)ptr);//it is correct due to typecast the void pointer into int
	ptr = ptr + sizeof(int);//pointer arithmetic now, the pointers will point to next element and size of void point is consider as 1
    printf("%d \n",*(int *)ptr); 
	return 0;
}

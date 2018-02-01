#include<stdio.h>
int main(){
	char a=9;
	int b=9;
	int *p=NULL;
  float *p1=NULL;
	char *p2=NULL;
	char *p3=&a;
	int *p4=&b;
	char **p5= &p3;
	printf("%d \n",sizeof(p));//output 4 point to int 
	printf("%d \n",sizeof(&p));//output 4 point to int 
	printf("%d \n",sizeof(p1));//output 4 point to int 
	printf("%d \n",sizeof(p2));//output 4 point to int 
  printf("%d \n",sizeof(p3));//output 4 point to int 
  printf("%d \n",sizeof(p4));//output 4 point to int 
  printf("%d \n",sizeof(p5));//output 4 point to int 
	printf("pointer poits to %x \n",p);// output zero x denote hexadecimal addresss
	
  /*print 0the operating systems, programs are not permitted to access memory at address 0 
	 because that memory is reserved by the operating system. However, the memory address 0 has 
	 special significance; it signals that the pointer is not intended to point to an accessible
	 memory location. But by convention, if a pointer contains the null (zero) value, it is assumed
   to point to nothing.*/
	printf("pointer poits to \n ",p);//**nothing will be print , not x here , no address is assigned
}

#include<stdio.h>
int main(){
 
 int arr[]={3,5,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 int *ptr=arr;
 for(int i=0;i<n;i++){
  	printf("size of pointer[%d] %x \n",i,ptr);
   	printf("value of pointer[%d] %d \n",i,*ptr);
  	ptr++;
 }
 /* here the size of pointer is 4 so when we do increment ptr++ if ptr  points to 1000 then after ptr++ it will point to 1004 
}

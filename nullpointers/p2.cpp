#include<stdio.h>
int fun(int *poin){
	return 10;
}
int main(){
int x=fun(NULL);
printf("%d",x);
return 0;
}

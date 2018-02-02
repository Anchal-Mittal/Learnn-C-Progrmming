#include<stdio.h>
int main(){
	char *p[]={"csjn","bdjd","dcndnck"};
	
    int size=sizeof(p)/sizeof(&p[0]);
    printf("%d \n",size);
    int i=0;
    for ( i=0;i<size;i++){
	 	printf("Value of *p[%d] = %s\n",i,p[i]);		
	}
	return 0;
}

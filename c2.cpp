/*The int scanf(const char *format, ...) function reads the input from the standard 
input stream stdin and scans that input according to the format provided.
The int printf(const char *format, ...) function writes the output to the standard
 output stream stdout and produces the output according to the format provided.
The format can be a simple constant string, but you can specify %s, %d, %c, %f, etc.,
 to print or read strings, integer, character or float respectively. There are many other
  formatting options available which can be used based on requirements.
*/


#include<stdio.h>
int main(){
    char c[10];
    int n;
    printf("ENTER A STRING = \n");
   
 
    // scanf("%s %d",&c,n);**ERROR
    scanf("%s %d ",c,&n);
    printf("%s %d  \n",&c,n);
    printf("%s  \n",NULL);//**OUTPUT (null)
    printf("%d  \n",NULL);//**OUTPUT 0
    
    
    printf("%d \n",printf(NULL));//**OUTPUT -1
    printf("%d  \n",printf("%d",NULL));//**OUTPUT 01
    
    //printf("%s",printf("%s",NULL));run time error
    printf("%d \n",printf("%s",NULL));//**output (null)6
    printf("%d  \n",printf("%s","sbjsd"));//**output sbjsd5
    printf("%f  \n",printf("%s","sbjsd"));//**output sbjsd0.000000  bcz float has 6 precision
   // printf("%s",printf("%s","sbjsd"));//**run time error
    return 0;
    
}

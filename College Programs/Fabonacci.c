#include<stdio.h>    
void main()    
{    

 int a=0,b=1,c,i,terms;    
 printf("Enter the number of elements:");    
 scanf("%d",&terms);    
 printf("\n%d %d",a,b);         //printing 0 and 1    

 for(i=2;i<terms;++i){         //loop starts from 2 because 0 and 1 are already printed smjha   
     
  c=a+b;    
  printf("%d",c);    
  a=b;    
  b=c;    

        } 

 }    
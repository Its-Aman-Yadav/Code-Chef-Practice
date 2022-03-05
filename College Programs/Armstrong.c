#include<stdio.h>  
void main()    
{    
  int n,r,sum=0,temp;    
  printf("enter the number=");    
  scanf("%d",&n);                //Entering values in n by the user
  temp=n;   

while(n>0){   

r=n%10;                         //Dividing into parts by modulus pdha hi hoga modulus mtlb remainder
sum=sum+(r*r*r);    
n=n/10;                         //aur yeh simple division only integer value
}  

if(temp==sum)                   //condition check 
   printf("armstrong  number ");    
else    
   printf("not armstrong number");    
} 

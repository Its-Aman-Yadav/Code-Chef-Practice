#include<stdio.h>  
void main(){    

int i,fact=1,number;    
printf("Enter a number: ");    
scanf("%d",&number);        //value enter krwana toh ratt le ache se & iss sign ko yaad rkhio

for(i=1;i<=number;i++){     //condition for factorial
fact=fact*i;    
  }

printf("Factorial of %d is: %d",number,fact);    

}   
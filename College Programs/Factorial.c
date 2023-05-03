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









// #include<stdio.h>
// long int multiplyNumbers(int n);
// int main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d",&n);
//     printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//     return 0;
// }

// long int multiplyNumbers(int n) {
//     if (n>=1)
//         return n*multiplyNumbers(n-1);
//     else
//         return 1;
// }

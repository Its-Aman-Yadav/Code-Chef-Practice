#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter starting number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);

    for(a;a<b;a++){
        for(int i=2;i<a/2;i++){
            if(a%i!=0)
               printf("%d",a);
        }
      
    }
}
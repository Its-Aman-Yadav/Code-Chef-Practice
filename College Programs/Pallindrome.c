#include<stdio.h>
void main(){

int i,n,r,s;
     
printf("Enter The Number:");
scanf("%d",&n);
     
for(i=n;i>0;i++){          //condition for pallindrome smjh skta hai toh smjh le yaa ratt hi le

        r=i%10;
        s=s*10+r;
        i=i/10;
}

if(s==n){
    printf("\n %d is a Palindrome Number",n);
    }

else{
    printf("\n %d is not a Palindrome Number",n);
    }

}
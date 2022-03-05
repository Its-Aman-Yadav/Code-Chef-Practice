#include<stdio.h>
double tax=0;
int main(){
    float income;
    printf("Enter your income");
    scanf("%f", &income);

    if (income>100){
        tax=(0.3*income);
        printf("Your Tax is   %f",tax);
    }

    else if( income>25 && income<50){
        tax=(0.05*income);
        printf("Your income is   %f",tax);
    }

    else if (income>50 && income<100){
        tax=(0.2*income);
        printf("Your tax is   %f",tax);
    }

    else {
        printf("Your tax is   %f",tax);
    }
}
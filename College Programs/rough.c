#include <stdio.h>


void printarray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }  
    printf("\n");
}

void selectionsort(int a[], int n){
    int indexofmin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexofmin=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[indexofmin]){
               indexofmin=j;
        } 
        
    }
    temp = a[i];
    a[i]=a[indexofmin];
    a[indexofmin]=temp;
    
}}

void insertionsort(int *a, int n){
    int j,key;
    for(int i=1; i<=n-1; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
          
}

void bubblesort(int a[], int n){
    for(int i=0; i<n-1; i++){

        for(int j=0;j<n-i-1;j++){

            if(a[j]>a[j+1]){

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
}

int main(){
    int a[]={7,5,2,70,4};
    int n= 5;
    printarray(a,n);
    // insertionsort(a,n);
    // bubblesort(a,n);
    selectionsort(a,n);
    printarray(a,n);
}
#include<iostream>
using namespace std;

void SwapValues(int &a, int &b){
     int temp=a;
     a=b;
     b=temp;
}  

int main(){
    int a=10,b=5;
    cout<<"Before Fuction Call"<<endl<<a<<endl<<b<<endl;
    SwapValues(a,b);
    cout<<"After Swapping"<<endl<<a<<endl<<b;
return 0;
}
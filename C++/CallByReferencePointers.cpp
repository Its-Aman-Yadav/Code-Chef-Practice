#include<iostream>
using namespace std;

void SwapValues(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5,b=4;
    cout<<"Before Function Call"<<endl<<a<<endl<<b<<endl;
    SwapValues(&a,&b);
    cout<<"After Function Call"<<endl<<a<<endl<<b<<endl;
return 0;
} 

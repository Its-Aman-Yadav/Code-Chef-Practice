//Pointers are the data types which holds the address of other data type

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* b= &a;
    cout << &a<<endl;
    cout<< b<<endl;
    cout<<*b;   // This is the Dereference Operator - Showing the obj at that address
return 0;
}

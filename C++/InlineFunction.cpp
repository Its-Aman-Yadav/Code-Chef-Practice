//Use when Functio is short and it saves the value of a function call which enhance the speed. It is just a request not a command and can be ignore by compiler.

#include<iostream>
using namespace std;
 
inline int sum(int a,int b){
    return a+b;
}

int main(){
    int a=5,b=6;
    cout<<sum(a,b);

return 0;
}

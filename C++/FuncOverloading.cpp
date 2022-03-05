#include<iostream>
using namespace std;

int Func(int a, int b){
    return a+b;
}

int Func(int a, int b, int c){
    return a*b*c;
}

int main(){
    int a=5,b=6,c=3;
    cout<<Func(a,b)<<endl;
    cout<<Func(a,b,c);

return 0;
}

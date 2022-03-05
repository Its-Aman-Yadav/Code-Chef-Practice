#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void){
        a=10;
        b=20;
    }

    void printnum(){
        cout<<"Your num is"<<a<<"+"<<b<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
return 0;
}

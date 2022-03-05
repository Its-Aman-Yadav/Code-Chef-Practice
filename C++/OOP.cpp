#include<iostream>
using namespace std;

class school{
    int a;
    int b;

    public:
    int c;
    int d;

    int func(int a, int b){
        return a+b;
     }

     int yo(int a, int b);
     void getdata();
};

void school :: getdata(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}

int school :: yo(int a, int b){
    return a*b;
}

int main(){
    school ansh;
    ansh.c=1500;
    ansh.d=100;
    ansh.getdata();
return 0;
}

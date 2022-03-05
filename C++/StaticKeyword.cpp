#include<iostream>
using namespace std;

void Func(){
    static int b;
    cout<<b++<<endl;
}


int main(){
    for (int i=0; i<3; i++){
        Func();
    }
return 0;
}

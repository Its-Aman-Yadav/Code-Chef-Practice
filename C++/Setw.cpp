#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5000,b=600,c=5;
    cout<<"Without setw"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"With Setw"<<endl;
    cout<<setw(5)<<a<<endl;
    cout<<setw(5)<<b<<endl;
    cout<<setw(5)<<c<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age:";
    cin>>a;

    switch(a){
        case 5:
         cout<<"your are 5"<<endl;
         break;
        case 18:
          cout<<"you are 18"<<endl;
          break;
        default:
          cout<<"you are nothing"<<endl;
          break;  
    }


return 0;
}

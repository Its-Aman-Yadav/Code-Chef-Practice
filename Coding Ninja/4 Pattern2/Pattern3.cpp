/*
4444
333
22
1
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1;j++){
            cout << n-i+1 ;
        }
        cout<<endl;
    }
}
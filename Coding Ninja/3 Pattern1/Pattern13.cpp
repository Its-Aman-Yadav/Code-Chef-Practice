/*
 A
 BB
 CCC
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i;
    while(i<=n){
        int j=1;
        int p=i+64;
        while(j<=i){
            
            cout << (char)p;
            j++; 
        }
        cout << endl;
        i++;
    }
return 0;
}

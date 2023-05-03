/*
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        char startchar = 'A' + n - i  ;
        while(j<=i){
            cout << startchar ;
            startchar++;
            j++;
        }
    cout << endl;
    i++;
    }
  
    
}
/*
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i=1;
    while (i<=n){
        int j=1;
        
        while(j<=i){
            int p=i+63+j;
            cout <<(char) p;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}

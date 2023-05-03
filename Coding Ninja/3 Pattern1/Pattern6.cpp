/* 1
   23
   345
   4567 */

#include<iostream>
using namespace std;
int main(){
    int n,p;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        p=i;
        while(j<=i){
             cout<<p;
             p++;
             j++;
        }
        cout << endl;
        i++;
    }

return 0;
}

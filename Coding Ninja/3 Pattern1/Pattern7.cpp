/*1
  23
  456
  78910 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i=1;
    int p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout <<p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }

return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for (int j=1; j<n-i; j++){
            cout<<" ";
        }
        int a=i;
        for (int k=1; k<=i; k++){
            cout<<a++;
        }
        
        a=a-2;
        for(int l=1; l<i; l++){
            cout<<a--;
        }

        cout<<endl;
        
    }
}

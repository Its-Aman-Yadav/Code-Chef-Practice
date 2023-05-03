#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    int count = 0;
    for(int i=1; ; i++){
        if((3*i+2)%4){
        cout<<3*i+2<<" ";
            count++;
            if(count==n)break;
        }
    }
}

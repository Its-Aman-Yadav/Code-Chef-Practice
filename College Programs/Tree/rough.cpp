#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[2], b[2];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }

    for(int i=0; i<3; i++){
        cin>>b[i];
    }

    int ans[2];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i]>b[i]){
              a[0]++;
            }

            else if(a[i]==b[i]){
                continue;
    }

            else{
                a[1]++;
            }
    }
    }

    cout<<ans;

return 0;
}

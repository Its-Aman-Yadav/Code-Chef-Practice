#include<iostream>
using namespace std;

void sum(int n){
    int count=0;
    for(int i=0; i<=n; i++){
        count=count+i;
        
    }
    cout<<count;
}

void Product(int n){
    int count=1;
    for(int i=1; i<=n; i++){
        count = count*i;
        }
    cout<<count;
}



int main() {
	int N,C; cin>>N>>C;
    
	if(C==1){
        sum(N);
    }
    
    else if(C==2){
        Product(N);
    }
    
    else{
        cout<<"-1";
    }
}

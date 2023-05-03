#include <bits/stdc++.h>
using namespace std;

double median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
 
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}


int main(){
	int t; cin>>t;
	while(t--){
		int a,n;
		cin>>a>>n;
		int arr[n];
		for(int i=1; i<=n; i++){
			arr[i] = pow(a,i);
			}
		int size = sizeof(arr)/sizeof(arr[0]);
		
		cout << median(arr, size) << endl;
		
	}
}
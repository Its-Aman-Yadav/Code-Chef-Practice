#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArray(vector<int> &arr1, vector<int>& arr2)
{
    vector<int> result;
    while (arr1.size() > 0 && arr2.size() > 0){
        if (arr1[0] <= arr2[0])
            result.push_back(arr1[0]);
        
        else
            result.push_back(arr2[0]);
    }

    while (arr1.size() > 0)
        result.push_back(arr1[0]);
    

    while (arr2.size() > 0)
        result.push_back(arr2[0]);

    return result;
}


void sort(vector<int>&A){
	if(A.size()==1)
	  return;

	vector<int>a;
	vector<int>b;

	for(int i=0; i<A.size(); i++){
		if(2*i<A.size())
			a.push_back(A[i]);
		else
			b.push_back(A[i]);	
	}

	sort(a);
	sort(b);
	vector<int> ans = mergeSortedArray(a,b);
    
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
}

int main(){
  vector<int>A = {2,5,1,9,6,8,4};
  sort(A);

    return 0;
}


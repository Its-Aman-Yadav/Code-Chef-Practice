#include <bits/stdc++.h>
#define ll long long int;

using namespace std;
int main()
{
	int T,k=1;
	
	cin>>T;
	
	while(T--)
	{
		string N;
		cin>>N;
		int i,len=0;
		len=N.length();         //Length of N
		//Taking vector B of size len (Size of N) 
		//and initialize all values to 0
		vector<int>B(len,0);
		for(i=0;i<len;i++)
		{
			//Checking if N[i] is 4 or not
			if(N[i]=='4')
			{
				N[i]='2';       //If 4 replace it by 2
				B[i]=2;         //Also replace B[i] by 2
			}
		}

		int ind=-1;
		/*If there is any leading 0 in B then we should not print that. 
		So, moving the index to very first non zero value of B*/
		for(i=0;i<len;i++)
		{
			//checking if there is any more leading 0 or not
			if(B[i]!=0)     
			{
				ind=i;
				break;
			}
		}
		
		//printing the value of A
		cout<<"Case #"<<k<<": "<<N<<" ";        
		//printing the value of B without leading 0
		for(i=ind;i<len;i++)
			cout<<B[i];
		cout<<"\n";
		//k is for printing the Case Number
		k++;
	}
	
	return 0;
}

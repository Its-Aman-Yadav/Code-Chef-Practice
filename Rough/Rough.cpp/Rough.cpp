/*
	Selection Sort Algorithm
	**Time Complexity: O(n^2)
	**Space Complexity: O(1) //no additional space is required
*/
#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//This function will return the index of minimum element from i to n-1
int getIndexOfMinElementFromiToEnd(vector<int>a, int i)
{   
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	for(int i=0;i<A.size();i++)
	{
		int j=getIndexOfMinElementFromiToEnd(A,i);
		swap(A[i],A[j]);
		cout<<"i: "<<i<<" vector: ";
		printVector(A);
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
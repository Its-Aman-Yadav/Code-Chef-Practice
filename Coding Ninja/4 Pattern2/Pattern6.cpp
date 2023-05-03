#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(j=i;j>=1;j--)
        {
            cout<<j;
        }

        for(j=2;j<=i;j++)
        {
            cout<<j;
        }
        printf("\n");
    }

    return 0;
}

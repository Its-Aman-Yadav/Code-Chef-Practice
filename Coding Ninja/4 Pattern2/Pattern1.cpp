/*
    *
   **
  ***
 ****

*/



#include<iostream>
using namespace std;

int main()
{
	int i, j, k;
	int n;
    cin>>n; 
     
    for(i = 1; i <= n; i++)
    {
    	for(j = 0; j <= n - i; j++)
		{
            cout << " ";
        }
        for(k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }		
 	return 0;
}



















// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n){
//         int space=1;
//         while (space<=n-1){
//             cout <<' ';
//             space++;
//         }

//         int j;
//         while(j<=i){
//             cout <<'*';
//             j++;
//         }

//         cout << endl;
//         i++;
//     }

// return 0;
// }

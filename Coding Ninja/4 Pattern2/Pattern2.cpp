/*   1 
    12
   123
  1234 */

#include<iostream>
using namespace std;


int main(){

     int n;
     cin >> n;
    
     int i=1;
     while(i<=n){
         int space;
         while(space<n-i){
             cout<<' ';
             space++;
         }
         int j=1;
         int k=1;
         while(j<=i){
             cout<<k;
             j++;
         }
         cout << endl;
         i++;
     }
}
    
    



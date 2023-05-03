#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
       
        int** arr = (int**)(malloc(sizeof(int*) * n));
        lli sum = 0;
        int row = 0;
    
        for (int i = 0; i < n; i++) {
            arr[i] = (int*)(malloc(sizeof(int) * n));
            map<int, int> mymap;
            bool flag = false;
            for (int j = 1; j < n; j++) {
                cin >> arr[i][j];
                if (i == j)
                    sum += arr[i][j];
                if (flag == false && mymap.find(arr[i][j]) != mymap.end()) {
                    row++;
                    flag = true;
                }
                if (flag == false)
                    mymap[arr[i][j]]++;
            }
        }
    

        int col = 0;
        for (int i = 0; i < n; i++) {
            map<int, int> mymap;
            bool flag = false;
            for (int j = 1; j < n; j++) {
                if (flag == false && mymap.find(arr[j][i]) != mymap.end()) {
                    col++;
                    flag = true;
                    break;
                }
                if (flag == false)
                    mymap[arr[j][i]]++;
            }
        }
        cout << "Case #" << i << ": " << sum << " " << row << " " << col << endl;
    }
    
    return 0;
}

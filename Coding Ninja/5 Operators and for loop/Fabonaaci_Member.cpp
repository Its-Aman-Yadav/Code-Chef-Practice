#include<iostream>
using namespace std;

bool checkMember(int n)
{
    int a = 0;
    int b = 1;
    int c;
    
    while(a < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    
    if(a == n)
    { 
        return true;
    }
    
    else
    {
        return false;
    }
}

int main(){
    int n; cin>>n;
    cout<<checkMember(n);
return 0;
}

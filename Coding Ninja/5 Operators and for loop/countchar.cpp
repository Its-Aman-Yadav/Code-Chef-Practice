#include<iostream>
using namespace std;

int main() 
{ 
    char c; 
    c = cin.get(); 
    int digits = 0, spaces = 0, characters = 0; 
    
    while(c != '$') 
    { 
        if(c >= 'a' && c <= 'z') 
        { 
            characters++; 
        }
        
        else if(c >= '0' && c <= '9') 
        { 
            digits++; 
        } 
        
        else if(c == ' ' || c == '\t' || c == '\n') 
        { 
            spaces++; 
        } 
        
        c = cin.get(); 
    }
    
    cout << characters << " " << digits << " " << spaces; 
}
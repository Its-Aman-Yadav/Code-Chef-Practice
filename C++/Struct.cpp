// It is a user defined data type - it is use when the group of data are diff types

#include<iostream>
using namespace std;

struct employee{                                // typedef struct employee{     <- This is use to give a alias 
        float salary;                           // int id;
         int id;
        char gender;
     };                                         // char gender;
                                                // float salary;
                                                // } EMP; 
     

int main(){

    struct employee aman;
    aman.id=4;
    aman.gender=1;
    aman.salary=1500.0;

    cout<<aman.id<<endl;
    cout<<aman.salary<<endl;
    cout<<aman.gender<<endl;

return 0;
}

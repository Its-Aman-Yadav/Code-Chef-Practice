#include<iostream>
#include<fstream>
using namespace std;
int main(){

string st,st2="Aman is the best";

ofstream out("Text.txt");    //Write a file
out<<st;

ifstream in("Text.txt");     //Read a file

return 0;
}

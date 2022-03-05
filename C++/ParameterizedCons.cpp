#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
      complex(int x, int y){
          a=x;
          b=y;
      }

      void printnum(){
          cout<<"Your num is<<"<<a<<"+"<<b<<endl;
      }
};

int main(){
    complex a = complex(4,6);
    complex b = complex(5,7);
    a.printnum();
    b.printnum();

return 0;
}

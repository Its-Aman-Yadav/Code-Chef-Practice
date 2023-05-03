#include<iostream>
using namespace std;

class Stack{
      int *data;
      int nextindex;
      int capacity;

      public:

      Stack(){
        nextindex = 0;
        data = new int[4];
        capacity = 4;
 }

    int size(){
        return nextindex;
    }

     bool isEmpty(){
        return nextindex == 0;
    }


      void push(int element){ 
        if(nextindex==capacity){
            int *newdata = new int[capacity*2];
            capacity = capacity*2;
            for(int i =0 ; i<capacity ;i++){
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
        }

        data[nextindex] = element;
        nextindex++;
      }

      int top(){
        return data[nextindex-1];
      }

      int pop(){
          if(isEmpty()){
            return INT_MIN;
          }

          nextindex--;
          return data[nextindex];
      }

};

int main(){

    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);

    cout<<a.size()<<endl;
    
    cout<< a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<a.isEmpty();

    cout<<a.top();


return 0;
}

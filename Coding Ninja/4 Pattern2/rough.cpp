#include <iostream>
using namespace std;

void func(int a[]) {
    cout << sizeof(a) << endl;
}

int main() {
    int a[10];
    func(a);
}
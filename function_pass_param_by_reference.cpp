#include<iostream>
using namespace std;


/*
We may alternatively use “pass-by-reference” so that a variable in a caller function (i.e., main())
passes the variable to a callee function (i.e., execute()) so that the callee can update this
variable directly and the result is visible to the caller.
*/

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 1, b = 2;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

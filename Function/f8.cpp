//to print the nth fibonacci series
#include <iostream>
using namespace std;

void fibonacci(int n){

    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        cout << a << endl;
        sum = a + b;
        a = b;
        b = sum;
    }
}

int main(){
    fibonacci(10);
}

//0 1 1 2 3 5 8
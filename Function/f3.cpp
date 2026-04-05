// sum of nos from 1 to N
#include <iostream>
using namespace std;

int sum(int n){
    int s = 0;
    int sumofno = 0;
    for (int i = 1; i <= n; i++){
        s = i + s;
    }
    return s;
}

// factorial of nos from 1 to N
int factorial(int n){
    int fact = 1;
    for(int i =1; i <=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){

    cout << "sum is" << sum(10) << endl;
    cout << "factorial is" << factorial(10) <<endl;
}
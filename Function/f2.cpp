//sum and maximum of 2 nos
#include <iostream>
using namespace std;

int sum(int a , int b){
    int s = a + b;
    return s;
}

int max(int a, int b){
    if ( a<b){
        return b;
    }
    else{
        return a;
    }
}

int main(){

    cout << sum (27 , 35) << endl;
    cout << max (57 , 75) << endl;

}
//WAF to calculate sum & product of all nos in an array
#include <iostream>
using namespace std;

int sum( int num[], int sz){
    int sum = 0;
    for( int i = 0; i < sz; i++){
        sum += num[i];
    }
    return sum;
}

int product( int num[], int sz){
    int product = 1;
    for( int i = 0; i < sz; i++){
        product *= num[i];
    }
    return product;
}

int main(){
    int arr[]={ 5 , 12 , 90 , 3 , 45};
    int sz = 5;
    cout << sum( arr , sz) << endl;
    cout << product( arr , sz) << endl;
}
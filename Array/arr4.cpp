//reverse an array
#include <iostream>
using namespace std;

void reverseArray( int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    while(start < end){
        swap( arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int array[] = { 1 , 2 , 3 , 4 , 5};
    int sz = 5;
    reverseArray(array,5);
    for ( int i =0; i < sz ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
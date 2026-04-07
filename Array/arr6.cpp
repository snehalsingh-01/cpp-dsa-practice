//WAF to swap the max & min no of an array
#include <iostream>
using namespace std;

int max( int num[], int sz){
    long int smallest = INT64_MIN;
    for( int i = 0; i < sz; i++){
        if( num[i] > smallest){
            smallest = num[i];
        }
    }
    return smallest;
}

int min( int num[], int sz){
    long int largest = INT64_MAX;
    for( int i = 0; i < sz; i++){
        if( num[i] < largest){
            largest = num[i];
        }
    }
    return largest;
}

void print( int num[], int sz){
    for (int i = 0; i < sz; i++){
        cout << num [i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = { 1 , 9 , 3 , 18 , 4};
    int sz = 5;
    int max_no = max( arr, 5) ;
    int min_no = min( arr, 5) ;
    int maxIndex = 0, minIndex = 0;
    
    for( int i = 0; i < sz; i++){
        if(arr[i] == max_no){
            maxIndex = i;
        }
        if(arr[i] == min_no){
            minIndex = i;
        }
    }

    swap( arr[maxIndex], arr[minIndex]);

    print( arr, 5);

}
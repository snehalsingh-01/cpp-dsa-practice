//reversing a vector
#include <iostream>
#include <vector>
using namespace std;

void reverse( vector <int> &num){
    int size = 5;
    int start = 0;
    int end = size - 1;
    for(int i= 0; i < size; i ++){
        while( start < end){
            swap ( num[start], num[end]);
            start++;
            end--;
        }
    }
}

int main(){
    vector <int> vec = { 1 , 2 , 3 , 4 , 5};
    int size = 5;
    reverse( vec );
    for (int val : vec){
        cout << val << " " << endl;
    }
}
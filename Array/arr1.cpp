#include <iostream>
using namespace std;

void array(int array[] , int size ){
    for (int i = 0; i < size; i++){
        cin >> array[i] ;
        cout << endl;
    }
}

void print(int array[] , int size){
    for (int i = 0; i < size; i++){
     cout << array[i] << endl;
    }

}

int main(){
    int arr[5];
   
    array(arr,5);
    print(arr,5);
}
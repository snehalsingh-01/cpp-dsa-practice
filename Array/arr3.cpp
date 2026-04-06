//linear search
#include <iostream>
using namespace std;

int linearSearch(int num[], int sz , int target){
    for (int i = 0; i < sz; i++){
        if (num[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = { 10 , 15 , 4 , 27 , 86 , 35};
    int sz = 6;
    int target = 27;

    cout << linearSearch( arr , 6 , 27) << endl;

}
//WAF to print all unique values in an array
#include <iostream>
using namespace std;

//first try
int print( int num[], int sz){
    int unique = 0;
    int count = 0;
    for (int i = 0; i < sz; i++){
        num[i] == unique;
        for (int j = 0; j < sz; j++){
            if (unique == num[i]){
              count = 0; 
            }
            else {
              count = num[i];
            }
        }
    }
    return count;
}

//second try
int findUnique( int num[], int sz){
    for(int i = 0; i < sz; i++){
        int count = 0;
        for( int j = 0; j < sz; j++){
            if (num[i] == num[j]){
                count++;
            }
        }
        if (count == 1){
            return num[i];
        }
    }
    return -1;
}

int main(){
    int num[] = { 1 , 2 , 1 , 2 , 3};
    int sz = 5;
    int ans = findUnique(num , 5);
    cout << ans << endl;

}
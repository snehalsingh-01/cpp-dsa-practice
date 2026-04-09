// Maximum Subarray
#include <iostream>
#include <vector>
using namespace std;

//how to print a max subarray
/*int main(){
    int  arr[] = { 1 , 2 , 3 , 4 , 5 };
    int sz = 5;
    for( int st = 0; st < sz; st++){
        for( int end = st; end < sz; end++){
            for( int i = st; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}*/

int main(){
    int  arr[] = { 1 , 2 , 3 , 4 , 5 };
    int sz = 5;
    int maxSum = INT8_MIN;

    for( int st = 0; st < sz; st++){
        int CurrSum = 0;
        for( int end = st; end < sz; end++){
            CurrSum += arr[end];
            maxSum = max( CurrSum, maxSum);
        }
    }
    cout << " Maximum Subarray Sum = " << maxSum << endl;
}
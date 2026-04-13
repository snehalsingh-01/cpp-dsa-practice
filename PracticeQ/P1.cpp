#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& num, int target){
    int n = num.size();
    for( int i = 0; i < n; i++){
        if ( num[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int>vec = { 1 , 5 , 7 , 3 , 0};
    int target;
    cout << "Enter the no u r searching for: " << endl;
    cin >> target;
  
    cout << linearSearch( vec , target) << endl;
}
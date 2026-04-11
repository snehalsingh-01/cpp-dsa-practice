#include <iostream>
#include <vector>
using namespace std;

int majElement(vector<int>& num){
    int n = num.size();
    for (int val : num){
        int freq = 0;
        for(int element : num){
            if(element == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
    return -1;
}

int main(){
    vector<int> num = { 1 , 2 , 2 , 1 , 1};
    int n = num.size();
    cout << "majority element = " << majElement(num) << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force approach 
/*int majElement(vector<int>& num){
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

//more optimal approach
int majElement(vector<int>& num){
    int n = num.size();
    //sort
    sort(num.begin(), num.end());

    // frequency
    int freq = 1 , ans = num[0];
    for (int i =1; i < n; i++){
        if (num[i] == num[i-1]){
            freq++;
        }
        else {
            freq = 1;
            ans = num[i];
        }
        if (freq > n/2){
            return ans;
        }
    }
    return ans;
}*/

//Moore's Voting Algorithm
int majElement(vector<int>& num){
    int n = num.size();
    int freq = 0, ans = 0;
    
    for (int i = 0; i < n; i++){
        if (freq == 0){
            ans = num[i];
        }
        if(ans == num[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    int count = 0;
    for(int val : num){
        if( val == ans){
            count++;
        }
    }
    if( count > n/2){
         return ans;
    }
    else{
        return -1;
    }
    return ans;
}

int main(){
    vector<int> num = { 1 , 2 , 2 , 1 , 1};
    int n = num.size();
    cout << "majority element = " << majElement(num) << endl;
}
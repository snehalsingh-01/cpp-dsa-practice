//Pair Sum
#include <iostream>
#include <vector>
using namespace std;

//first try
/*vector <int> pairSum(vector<int>& num, int target){
    vector <int> ans;
    int sz = num.size();

    for ( int i = 0; i < sz; i++){
        for ( int j = i+1; j < sz; j++){
            if ( num[i] + num[j] == target){
                ans.push_back(num[i]);
                ans.push_back(num[j]);
                return ans;
            }
        }
    }
    return ans;
}*/

//second try
vector <int> pairSum(vector<int>& num, int target){
    vector <int> ans;
    int sz = num.size();
    int st = 0 , end = sz - 1;
    
    while ( st < end){
        int pairSum = num[st] + num[end];
        if ( pairSum < target){
            st++;
        }
        else if ( pairSum > target){
            end--;
        }
        else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector <int> num = { 2 , 12 , 7 , 15};
    int target = 9;

    vector <int> ans = pairSum( num , 9);
    cout << ans[0] << " , " << ans[1];
    cout << endl;
   
}
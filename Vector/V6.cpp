//Pair Sum
#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector<int>& num, int target){
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
}

int main(){
    vector <int> num = { 2 , 7 , 11 , 15};
    int target = 9;
    vector <int> ans = pairSum( num , 9);
    cout << ans[0] << " " << ans[1];
    cout << endl;
   
}
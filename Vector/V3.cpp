//linear search
#include <iostream>
#include <vector>
using namespace std;

int linearSearch( vector <int> &num){
    int target;
    cout << " Enter the no you want to search: " << endl;
    cin >> target;
    for(int i = 0; i < num.size(); i++){
        if(num[i] == target){
            return i;  
        }
    }
    return -1;
}

int main(){
    vector <int> vec = { 1 , 5 , 9 , 3 , 2};
    int target;
    int ans = linearSearch( vec ) ;
    
    if(ans != -1)
        cout << "Element found at index: " << ans << endl;
    else
        cout << "Element not found" << endl;

}
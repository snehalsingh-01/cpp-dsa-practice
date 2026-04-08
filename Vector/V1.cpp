#include <iostream>
#include <vector>
using namespace std;

int  main(){
    vector <int> vec;
    vector <int> vec={ 1 , 2 , 3}; //syntax
    cout << vec[2]  << endl;

    vector <int> v (5,1); //syntax
    int sz = 5;
    for(int i : v){ //for loop
        cout << i << " ";
    }
    cout << endl;
}
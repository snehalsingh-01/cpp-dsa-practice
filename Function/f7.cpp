//to print all prime nos from 1 to N
#include <iostream>
using namespace std;

void print(int n){
    for (int i = 1; i<=n; i++){
        if(i % 2 !=0){
            cout << i <<endl;
        }
    }
}

int main(){

    print(37);

}


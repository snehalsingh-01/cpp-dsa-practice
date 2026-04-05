//to check if a no is prime or not
#include<iostream>
using namespace std;

void prime(){
    int a;
    cout << "Enter a no:" << endl;
    cin >> a;
    if(a % 2 == 0){
        cout << a << "is not a prime no" <<endl;
    }
    else{
        cout << a << "is a prime no" <<endl;
    }
} 

int main(){

    prime();

}
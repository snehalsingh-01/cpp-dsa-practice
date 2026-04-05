//sum of digits of a number
#include <iostream>
using namespace std;

int b(){
     int a = 145;
    int sum = 0;
    int newnumber=0;

    while(a!=0){
        int number = a % 10;
        a = a / 10;
        sum = number + sum;

    }

    return sum;

}

int main(){
    cout << "sum of digits of a no are =" << b() <<endl;
}
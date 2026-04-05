#include <iostream>
using namespace std;

//function definition
int printHello(){
    cout << "helloooooooo" << endl;
    return 7;
}

int main(){
    for ( int i = 0; i < 5; i++){
        //function call/invoke
        printHello();
    }

    int a = printHello();
    cout << "return value =" << a <<endl;

    cout << printHello() <<endl;


}
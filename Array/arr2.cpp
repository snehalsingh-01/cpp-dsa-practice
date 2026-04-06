//smallest and largest no in an array
#include <iostream>
using namespace std;

int main(){

int num[] = {5,8,12,-2,67,6};
int size = 6;
long int smallest = INT64_MAX;
long int largest = INT64_MIN;

for (int i = 0; i < size; i++){
    if (num[i] < smallest){
        smallest = num[i];
    }
}

for (int i = 0; i < size; i++){
    if (num[i] > largest){
        largest = num[i];
    }
}

cout << "Smallest no is :" << smallest << endl;
cout << "Largest no is :" << largest << endl;

}
//vector functions
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <char> vec = {'a','b','c','d','e'};
    cout << "Vector size = "<< vec.size() << endl; // tells the size of the vector

    vector <int> vector;
    vector.push_back(25); // adds a no from left
    vector.push_back(26);
    vector.push_back(27);
    cout << "After pushback vector size = "<< vector.size() << endl;
    cout << "After pushback vector capacity = "<< vector.capacity() << endl;

    vector.pop_back(); // pops off the no from the last
    cout << "After popback vector size = "<< vector.size() << endl;
    cout << "After popback vector capacity = "<< vector.capacity() << endl;
    for( int val : vector){
        cout << val << " " << endl;
    }

    cout << vec.front() << " "; // prints the 1st no
    cout << vec.back() << endl; // prints the last no
    cout << vec.at(3) << " " << endl; // specifies the value at index

}
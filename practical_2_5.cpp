#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x = 5; 
    cout << "Local value of x: " << x << endl; 
    cout << "Global value of x: " << ::x << endl; 
    return 0;
}


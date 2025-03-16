#include <iostream>
using namespace std;

int factorial(int num) {
    if (num <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return num * factorial(num - 1); // Recursive case
    }
}

int main() {
    int result = factorial(15);
    cout << "Factorial of 15 is " << result << endl;
    return 0;
}

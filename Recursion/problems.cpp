#include <iostream>
using namespace std;

int factorial (int n) {
if (n == 0) {
    return 1;
}
else {
    return n * factorial(n-1);
     }

}



int main() {
    cout << "enter number: " << endl;
    int n;
    cin >> n;
    int result = factorial (n);
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}

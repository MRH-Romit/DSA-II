#include <iostream>
#include <vector>

using namespace std;

void callme(int n)
{
    if (n == 0)
        return;
    cout << "Hello World" << endl;
    callme(n - 1);
}

int main() {
    callme(5);
    return 0;
}
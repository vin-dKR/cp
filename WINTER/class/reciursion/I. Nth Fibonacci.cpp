#include <iostream>
using namespace std;

long long fib(long long n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    long long N;
    cin >> N;
    cout << fib(N) << "\n";
    return 0;
}


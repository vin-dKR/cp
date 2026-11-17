#include <iostream>
using namespace std;

long long sumOfDigits(long long n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    long long N;
    cin >> N;
    cout << sumOfDigits(N) << "\n";
    return 0;
}


#include <iostream>
using namespace std;

long long sumOfnNaturalNum(int n) {
    if (n == 1) return 1;
    
    return n + sumOfnNaturalNum(n - 1);
}

int main() {
    int N;
    cin >> N;
    
    cout << sumOfnNaturalNum(N);
}



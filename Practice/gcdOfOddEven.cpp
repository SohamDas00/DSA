#include <bits/stdc++.h>
using namespace std;

int gcdOfOddEvenSums(int n) {
    int sumOdd = 0, sumEven = 0;
    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    return __gcd(sumOdd, sumEven);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = gcdOfOddEvenSums(n);
    cout << "GCD of odd and even sums = " << result << endl;
}

#include <iostream>
using namespace std;

void primeFactorization(int n) {
    // 2로 나누어 떨어지는 동안 2를 출력하고 나눕니다.
    while (n % 2 == 0) {
        cout << 2 << endl;
        n /= 2;
    }

    // 3부터 시작하여 홀수 소수로 나누어 떨어지는 경우를 찾습니다.
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << endl;
            n /= i;
        }
    }

    // 마지막으로 남은 수가 1이 아니면 소수입니다.
    if (n > 1) {
        cout << n << endl;
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;

    primeFactorization(N);

    return 0;
}
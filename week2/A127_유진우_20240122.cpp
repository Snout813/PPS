// 다시 풀어볼 것
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int cnt;
    cin >> cnt;
    int number[cnt];
    for(int i =0; i< cnt; i++){
        int A, B;

        cin >> A >> B;

        int result = lcm(A, B);
        number[i] = result;
    }
    for(int i :number){
        cout << i <<endl;
    }

    return 0;
}

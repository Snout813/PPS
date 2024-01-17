#include <iostream>
using namespace std;

int main(){
    int max = 0;
    int count=0;

    for (int i = 0; i< 4; i++){
        int num1, num2;
        cin >> num1 >>num2;
        count = count + num2 -num1;
        if(count >max){
            max = count;
        }
    }
    cout << max << endl;

    return 0;
}
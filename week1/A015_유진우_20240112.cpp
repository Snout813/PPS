#include <iostream>
using namespace std;

int main(){
    int number;
    int pow=0;

    for(int i =0; i<5; i++){
        cin >> number;
        pow += number*number;
    }
    cout << pow % 10<<endl;


    return 0;
}
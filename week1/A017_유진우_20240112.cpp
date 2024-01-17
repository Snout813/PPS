#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string number;

    cin >> number;
    int count[10]={0,};
    for (int i =0; i < number.length(); i++){
        count[number[i]-'0']++;
    }
    int six = ceil((count[6]+count[9])/2.0);
    count[6] = six;
    count[9]= six;
    int max=0;
    for (int i =0; i< 10; i++){
        if (count[i] > max){
            max = count[i];
        }
    }
    cout<< max <<endl;

    return 0;
}
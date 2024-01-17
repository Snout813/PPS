#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> mad;
    bool flag = false;
    int count=0;
    int n;
    int number[10];
    for (int i = 0;i < 10; i++){
        cin >> number[i];
    }
    for (int i = 0; i < 10 ; i++){
        flag = false;
        if(i == 0 ){
            mad.push_back(number[i]%42);
            count ++;
            flag = true;
        }
        else{
            for (int j = 0; j < mad.size();j++){
                n = number[i]%42;
                if(n == mad[j] ){
                    flag = true;
                    break;
                }
            }
        }
        if(flag  == false){
            count ++;
            mad.push_back(n);
        }
    }
    cout << count << endl;





    return 0;
}
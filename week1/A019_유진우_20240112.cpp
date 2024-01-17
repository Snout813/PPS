#include <iostream>
#include <string>
using namespace std;

int main(){
    string number[3];
    int count [10]={0,};
    int zero = 0;
    long long sum;

    for(int i =0 ;i<3; i++){
        cin >>number[i];
    }
    
    sum = stoi(number[0])*stoi(number[1])*stoi(number[2]);
    string str_sum = to_string(sum);
    for (int i = 0 ; i < 10; i++){
        for(int j = 0; j<str_sum.length();j++){
            if(str_sum[j] == i+'0'){
                count[i]++;
            }
        }
    }
    for(int i =0; i<10;i++){
        cout<< count[i]<<endl;
    }



    return 0;
}
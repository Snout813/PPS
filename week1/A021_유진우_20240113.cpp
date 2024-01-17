#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >>  count;
    int sum =0;
    vector <int> num;
    for (int i = 0; i< count; i++){
        int number;
        cin>> number;
        num.push_back(number);
    }
    for (int i = 0; i< count ; i++){
        if(i ==0 ){
            sum += num[i];
        }
        else{
            sum --;
            sum += num[i]; 
        }
    }
    cout<< sum << endl;
    return 0;
}
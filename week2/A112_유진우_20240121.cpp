#include <iostream>
#include <vector>
using namespace std;

int main(){
    int req;
    int count;
    cin >> req >> count;
    vector <int> set;
    vector <int> one;
    for(int i =0 ; i< count ; i++){
        int num1, num2;
        cin >> num1 >> num2;
        set.push_back(num1);
        one.push_back(num2);
    }
    int set_min =1000;
    int one_min =1000;
    int money =0;
    for(int i =0; i< count ; i++){
        if(set_min > set[i]){
            set_min = set[i];
        }
        if(one_min> one[i]){
            one_min = one[i];
        }
    }
    if(set_min < one_min*6){
        money += (req /6)*set_min;
        req = req %6;
        if(set_min < one_min*req){
            money += set_min;
        }
        else{
            money += req*one_min;
        }
    }
    else{
        money += req*one_min;
    }
    cout << money <<endl;
    return 0;
}
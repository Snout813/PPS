#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    vector <int> number;
    cin >> count;
    for(int i =0; i< count; i++){
        int num;
        cin >> num;
        number.push_back(num);

    }
    for(int i=0; i< count ; i++){
        double result=0;
        for(int j =0; j< number[i];j++){
            if(j==0){
                result += 1;
            }
            else {
                result += 0.5;
                result *=2;
            }
        }
        cout << (int)result << endl;
    }



    return 0;
}
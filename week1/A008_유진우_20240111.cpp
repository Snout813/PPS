#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector <vector<int> > number;
    vector <double> average;
    for (int i = 0; i< count; i++){
        int case_count;
        vector <int>v;
        cin >> case_count;
        for (int j =0; j<case_count; j++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        number.push_back(v);
    }
    for (int i =0 ; i<count; i++){
        int sum=0;
        int cnt =0;
        for (int j : number[i]){
            sum += j;
            cnt ++;
        }
        double avg = sum/(cnt*1.0);
        average.push_back(avg);

    }
    for (int i =0; i<count; i++){
        int cnt =0;
        for (int j: number[i]){
            if(average[i]<j){
                cnt++;
            }
        }
        double avg = cnt*1.0 /number[i].size()*100;
        printf("%.3f%%\n",avg);
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int sum[5];
    for (int i = 0; i<5; i++){
        int a, b, c,d;
        cin >> a>>b>>c>>d;
        int result = a+b+c+d;
        sum[i] = result;
    }
    int max=0;
    int index=0;
    for(int i = 0; i < 5; i++){
        if(sum[i]>max){
            max = sum[i];
            index = i+1;
        }
    }
    cout << index << " "<< max<<endl;
    return 0;
}
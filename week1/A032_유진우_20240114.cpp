// 다시 풀기
#include <iostream>
using namespace std;

int DP(int a,int b){
    if(a < 1) return b;
    if(b < 1) return 0;
    else{
        return DP(a-1,b) + DP(a,b-1);
    }
}
int main(){
    int t, a, b;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> a;
        cin >> b;
        cout << DP(a,b) << "\n";
    }
}
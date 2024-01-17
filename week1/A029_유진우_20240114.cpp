#include <iostream>
#include <vector>

using namespace std;

int main(){
    int door;
    int start;
    cin >>door;
    cin >> start;
    if(door > 5){
        cout<< "Love is open door"<<endl;
    }
    else{
        for (int i= 0; i<door-1 ; i++){
            if(start ==1){
                cout<< "0"<<endl;
                start=0;
            }
            else{
                cout <<"1"<<endl;
                start=1;
            }
        }
    }



    return 0;
}
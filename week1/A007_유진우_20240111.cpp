#include <iostream>
using namespace std;

int main(){
    bool ascending =true;
    bool descending =true;
    int music[8];
    for (int i = 0; i < 8; i++){
        cin >> music[i];
    }
    for (int i = 0 ; i< 8; i++){
        if(music[i] != i +1){
            ascending = false;
        }
        if(music[i] != 8-i){
            descending = false;
        }
    }
    if(ascending == true){
        cout<< "ascending"<<endl;
        
    }
    else if (descending == true){
        cout << "descending" <<endl;
    }
    else{
        cout << "mixed"<<endl;
    }



    return 0;
}
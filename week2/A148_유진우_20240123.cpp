#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    int number =0;

    getline(cin, word);

    if(word.length()==1){
        if(word[0] !=' '){
            number++;
        }
    }
    else{
        for(int i =0; i<word.length(); i++){
            if(word[i] ==' ' && i !=0 && i != word.length()-1){
                number++;
            }
        }
        number++;
    }

    cout<< number<<endl;

    return 0;
}
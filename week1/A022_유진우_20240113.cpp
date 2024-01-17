#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin >> count;
    vector <int> record;
    int y_result =0;
    int m_result=0;
    for(int i = 0; i<count; i++){
        int num;
        cin >> num;
        record.push_back(num);
    }
    for (int i = 0; i<count; i++){
        y_result += (record[i]/30 +1)*10;
        m_result += (record[i]/60 +1)*15;
    }
    if(y_result > m_result){
        cout<< "M "<<m_result<<endl;
    }
    else if (y_result == m_result){
        cout << "Y M "<< m_result <<endl;
    }
    else{
        cout<< "Y "<<y_result<<endl;
    }

    return 0;
}
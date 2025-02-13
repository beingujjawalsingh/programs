#include<iostream>
#include<vector>
#include <string>
using namespace std;

int main(){
    
    vector<int> arr;

    int s = 10;

    for(int i=0 ; i< s ; i++){
        int j;
        cin >> j;

        arr.push_back(j);
    }


    for(int i=0 ; i< s ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
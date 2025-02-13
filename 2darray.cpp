#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int>> vec={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // vec.push_back({10,11,12});
    // for(const auto& row:vec){
    //     for (int val : row){
    //         cout<< val << "";
    //     }
    //     cout<< endl;
    // }
    // 
    vector<string>words={"apple","banana","cherry"};
    for( auto& word : words){
        word+="!";
    }
    for (const auto word : words){
        cout<<word<<" ";
    }
    return 0;
}
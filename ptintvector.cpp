#include<iostream>
#include<map>
using namespace std;

 void printmap(const map<int ,string>& m){
//     for(int val : vec){
//         cout<< val<<" ";
        
//     }
//     cout<<endl;
//     for(int val : vec){
//         cout<<val+2<<" ";
//     }
// }
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     printvector(vec);
//     return 0;
    for(auto& pair : m){
        cout<<"key"<<pair.first<<",value:"<<pair.second<<
        endl;
    }
}
int main(){
    map<int,string>m;
    m[1]="one";
    m[2]="two";
    m[3]="three";
    return 0;
}
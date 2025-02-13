#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    // map<int,string> m;
    // m[1]="One";
    // m[3]="Three";
    // m[2]="Two";
    // cout << "key 2 has value:"<<m[2] << endl;

    // for (auto& pair : m){
    //     cout <<"key : "<<pair.first<<",value :"<<pair.second<<endl;
    // }
    // return 0;
    vector<int> arr={1,2,3,3,4,4,5,6,7,8 };
    unordered_map<int,int> count;

    for(int n : arr){
        count[n]++;
       // cout<<count[n]<<endl;

    }
    for (auto pair : count){
        cout<<pair.first << " : " <<pair.second<<endl;
    }
    // return 0;
    // unordered_map<string,int>umap;
    // umap["cat"]=5;
    // umap["dog"]=3;
    // umap["bird"]=7;

    // for (auto& pair : umap){
    //     cout << pair.first<<" ->" <<pair.second<<endl;
    // }
    // return 0;
}
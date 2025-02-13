#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int coutpairs(vector<int> &arr,int target){
    unordered_map<int,int>m;
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        int com=target-arr[i];
        if(m.find(com)!=m.end())
        {
            count+=m[com];

        }
        m[arr[i]]++;

    }
    return count;
}

int main(){
    vector<int> arr={1,5,7,-1,5};
    int k=6;
    int res=coutpairs(arr,k);
    cout<<res;
    return 0;
}

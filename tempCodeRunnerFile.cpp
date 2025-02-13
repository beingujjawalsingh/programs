
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
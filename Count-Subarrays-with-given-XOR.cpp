long subarrayXor(vector<int> &arr, int k) {
        // code here
        int count=0;
        int prefixor=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            prefixor^=arr[i];
            if(mp.find(prefixor^k)!=mp.end())count+=mp[prefixor^k];
            mp[prefixor]++;
        }
        return count;
    }

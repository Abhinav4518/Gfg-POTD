int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int prefixSum=0;
        int count=0;
        mp[0]=1;
        for(auto it:arr){
            prefixSum+=it;
            if(mp.find(prefixSum-k)!=mp.end())count+=mp[prefixSum-k];
            mp[prefixSum]++;
        }
        return count;
    }

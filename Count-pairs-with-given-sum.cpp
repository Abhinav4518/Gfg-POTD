int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>mp;
        int result=0;
        for(int i=0;i<arr.size();i++){
            int complement=target-arr[i];
            if(mp.find(complement)!=mp.end()){
                result+=mp[complement];
            }
            mp[arr[i]]++;
        }
        return result;
    }

int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int>nums(arr.begin(),arr.end());
        int maxlen=0;
        for(auto i:arr){
            if(nums.find(i-1)==nums.end()){
                int curr=i;
                int len=1;
                while(nums.find(curr+1)!=nums.end()){
                    curr=curr+1;
                    len=len+1;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }

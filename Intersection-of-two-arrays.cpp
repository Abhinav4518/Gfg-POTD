vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto it:a)mp[it]++;
        for(auto it:b){
            if(mp[it]>0){
                ans.push_back(it);
                mp[it]=0;
            }
        }
        return ans;
    }

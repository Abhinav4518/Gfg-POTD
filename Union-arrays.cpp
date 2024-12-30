int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>mp;
        for(auto i:a)mp[i]++;
        for(auto i:b)mp[i]++;
        return mp.size();
    }

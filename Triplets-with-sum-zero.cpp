vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        set<vector<int>>st;
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                mp[arr[i]+arr[j]].push_back({i,j});
            }
        }
        for(int i=0;i<arr.size();i++){
            int req=-arr[i];
            if(mp.find(req)!=mp.end()){
                for(auto it:mp[req]){
                    if(i!=it.first && i!=it.second){
                        vector<int>curr={i,it.first,it.second};
                        sort(curr.begin(),curr.end());
                        st.insert(curr);
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }

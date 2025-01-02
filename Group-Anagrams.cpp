 vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<arr.size();i++){
            string temp=arr[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(arr[i]);
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }

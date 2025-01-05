int countPairs(vector<int> &arr, int target) {
        // Your code here
        int count=0;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum<target){
                count+=(j-i);
                i++;
            }
            else j--;
        }
        return count;
    }

class Solution {
public:
    void combinations(int idx,vector<int>&arr,vector<vector<int>>&ans,vector<int>ds,int target){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            combinations(idx,arr,ans,ds,target-arr[idx]);
            ds.pop_back();
        }
        combinations(idx+1,arr,ans,ds,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combinations(0,candidates,ans,ds,target);
        return ans;
    }
};

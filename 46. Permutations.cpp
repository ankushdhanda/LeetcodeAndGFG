class Solution {
public:
    void allpermute(int freq[],vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                freq[i]=1;
                ds.push_back(nums[i]);
                allpermute(freq,ans,ds,nums);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)freq[i]=0;
        vector<vector<int>>ans;
        vector<int>ds;
        allpermute(freq,ans,ds,nums);
        return ans;
    }
};

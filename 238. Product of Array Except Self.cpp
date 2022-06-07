class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int *larr=new int[n];
        int *rarr=new int[n];
        larr[0]=1;
        rarr[n-1]=1;
        for(int i=1;i<n;i++){
            larr[i]=nums[i-1]*larr[i-1];
            rarr[n-i-1]=nums[n-i]*rarr[n-i];
        }
        for(int i=0;i<n;i++){
            nums[i]=larr[i]*rarr[i];
        }
        return nums;
    }
};

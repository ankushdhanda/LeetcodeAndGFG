class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return 1;
        if(nums[0]==0)return 0;
        int maxR=nums[0];
        int steps=nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxR>=nums.size()-1)return 1;
            maxR=max(maxR,nums[i]+i);
            steps--;
            if(steps==0){
            steps=maxR-i;
            }
            if(i>=maxR)return 0;
        }
        return 1;
    }
};

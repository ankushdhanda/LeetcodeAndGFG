class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        if(nums[0]==0)return -1;
        int maxR=nums[0];
        int steps=nums[0];
        int jumps=1;
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1)return jumps;
            maxR=max(maxR,i+nums[i]);
            steps--;
            if(steps==0){
                jumps++;
                if(i>=maxR)return -1;
                steps=maxR-i;
            }
        }
        return jumps;
    }
};

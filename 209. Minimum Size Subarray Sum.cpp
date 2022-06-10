class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int st=0,en=0;
        int currsum=0;
        int res=INT_MAX;
        while(en<n){
            currsum+=nums[en];
            if(currsum<target){
                en++;
            }
            else{
                
                    while(currsum>=target){
                        res=min(res,en-st+1);
                        currsum-=nums[st];
                        st++;
                    }
                    en++;
                
            }
        }
        if(res==INT_MAX)return 0;
        return res;
    }
};

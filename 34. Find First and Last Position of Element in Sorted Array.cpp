class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,en=n-1;
        int mid;
        while(st<=en){
            mid=st+(en-st)/2;
            if(nums[mid]==target){
                int i=mid;
                int j=mid;
                
                    while(i>0 && nums[i-1]==target ){
                        i=i-1;
                    }
                
                
                    while(j<n-1 && nums[j+1]==target ){
                        j=j+1;
                    }
                
                return {i,j};
            }
            if(nums[mid]<target) st=mid+1;
            if(nums[mid]>target) en=mid-1;
        }
        return {-1,-1};
    }
};

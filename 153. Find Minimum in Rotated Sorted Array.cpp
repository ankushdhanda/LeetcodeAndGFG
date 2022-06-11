MY 100th CODE :)
  
  class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int en=n-1;
        int mid;
        int res=INT_MAX;
        while(st<=en){
            mid=(st+en)>>1;
            if(nums[st]<=nums[mid]){
                res=min(res,nums[st]);
                st=mid+1;
            }
            else{
                res=min(res,nums[mid]);
                en=mid-1;
            }
        }
       return res; 
    }
};

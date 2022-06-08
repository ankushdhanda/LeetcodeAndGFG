DRAW A GRAPH TO GET IDEA

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n=nums.size(); 
       int st=0,en=n-1;
       int mid;
        while(st<=en){
            mid=(st+en)>>1;
            if((mid==0 || nums[mid-1]<nums[mid]) &&(mid==n-1 || nums[mid]>nums[mid+1]) )return mid;
            else if(mid>0&&nums[mid]<nums[mid-1])en=mid-1;
            else st=mid+1;
        }
        return -1;
    }
};

33. Search in Rotated Sorted Array


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int en=n-1;
        int mid;
        while(st<=en){
            mid=(st+en)>>1;
            if(target==nums[mid])return mid;
            
            //checking if left half is sorted
            if(nums[st]<=nums[mid]){
                //figure out if it lies in the left half
                if(target<nums[mid] && target>=nums[st])en=mid-1;
                //if it does not lies in left half eleminate the left half
                else st=mid+1;
            }
            //if left half is not sorted it checks if right half is
            else{
                //figure our if it lies in right half
                if(nums[en]>=target && target>nums[mid])st=mid+1;
                //if it does not eleminate the right half
                else en=mid-1;
            }
        }
        return -1;
    }
};

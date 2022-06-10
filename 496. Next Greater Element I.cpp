class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        vector<int>res(nums1.size(),-1);
        for(int i=0;i<nums2.size();i++){
            while(st.empty()==false && nums2[i]>st.top()){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                res[i]=mp[nums1[i]];
            }
            
        }
        return res;
    }
};


//OR
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        vector<int>res;
        vector<int>rnums2(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
            while(st.empty()==false && st.top()<nums2[n-1-i]){
                st.pop();
            }
            int s=st.empty()?-1:st.top();
            rnums2[n-1-i]=s;
            st.push(nums2[n-1-i]);
        }
        for(int i=0;i<nums1.size();i++){
            res.push_back(rnums2[mp[nums1[i]]]);
        }
        return res;
    }
};

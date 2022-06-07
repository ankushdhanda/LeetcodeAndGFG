class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int presum=0;
        int res=0;
        for(int i=0;i<n;i++){
            presum+=A[i];
            if(presum==0)
            res=i+1;
            if(mp.find(presum)==mp.end())
            mp.insert({presum,i});
            if(mp.find(presum)!=mp.end())
            res=max(res,i-mp[presum]);
        }
        return res;
    }
};

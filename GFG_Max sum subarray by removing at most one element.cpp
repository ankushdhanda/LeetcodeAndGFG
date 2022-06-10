class Solution
{
    public:
    //Function to return maximum sum subarray by removing at most one element.
    int maxSumSubarray(int A[], int n)
    {
        vector<int>fw(n);
        fw[0]=A[0];
        int mxendingf=A[0];
        int res=A[0];
        for(int i=1;i<n;i++){
            mxendingf=max(mxendingf+A[i],A[i]);
            res=max(res,mxendingf);
            fw[i]=mxendingf;
        }
        vector<int>bw(n);
        bw[n-1]=A[n-1];
        int mxendingb=A[n-1];
        int resb=A[n-1];
        for(int i=n-2;i>=0;i--){
            mxendingb=max(mxendingb+A[i],A[i]);
            resb=max(resb,mxendingb);
            bw[i]=mxendingb;
        }
        int ans=res;
        for(int i=1;i<n-1;i++){
            ans=max(ans,fw[i-1]+bw[i+1]);
        }
       return ans; 
    }
};

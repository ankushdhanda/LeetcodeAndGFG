class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        vector<int>fw(n);
        fw[0]=arr[0];
        int maxendingfw=arr[0];
        int res=arr[0];
        for(int i=1;i<n;i++){
            maxendingfw=max(maxendingfw+arr[i],arr[i]);
            res=max(res,maxendingfw);
            fw[i]=maxendingfw;
        }
        vector<int>bw(n);
        bw[n-1]=arr[n-1];
        int maxendingbw=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            maxendingbw=max(maxendingbw+arr[i],arr[i]);
            
            bw[i]=maxendingbw;
        }
        int fresult=INT_MIN;
        for(int i=1;i<n-1;i++){
            fresult=max(fw[i-1]+bw[i+1],fresult);
        }
        return max(res,fresult);
    }
};

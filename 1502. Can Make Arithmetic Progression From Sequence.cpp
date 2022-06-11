class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            int d=arr[1]-arr[0];
            if(d!=arr[i]-arr[i-1])return false;
        }
        return true;
    }
};

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n=list1.size();
        int m=list2.size();
        unordered_map<string,int>mp;
        vector<string>res;
        int index=INT_MAX;
        for(int i=0;i<n;i++){
            mp[list1[i]]=i;
        }
        for(int i=0;i<m;i++){
            if(mp.find(list2[i])!=mp.end()){
                if((mp[list2[i]]+i) < index){
                    res.clear();
                    res.push_back(list2[i]);
                    index=mp[list2[i]]+i;
                }
                else if(mp[list2[i]]+i == index){
                    res.push_back(list2[i]);
                }
            }
        }
        return res;
    }
};

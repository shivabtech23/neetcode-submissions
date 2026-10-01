class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> v;
        for(auto it:freq){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i = (int)v.size() - 1; i >= (int)v.size() - k; i--) {
    ans.push_back(v[i].second);
}return ans;
    }
    
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

    unordered_map<int,int> freq;

    for(int num : nums){
        freq[num]++;
    }

    vector<pair<int,int>> v;

    for(auto i : freq){
        v.push_back({i.second, i.first});
    }

    sort(v.begin(), v.end());

    vector<int> ans;

    for(int i = (int)v.size()-1; i >= (int)v.size()-k; i--){
    ans.push_back(v[i].second);
}
    return ans;
}
};

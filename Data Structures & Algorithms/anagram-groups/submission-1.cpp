class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto str:strs){
            string key =str;
            sort(key.begin(),key.end());
            mp[key].push_back(str);
        }

        vector<vector<string>> ans; // to return it in one single line we need to create this
        for(auto it:mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};

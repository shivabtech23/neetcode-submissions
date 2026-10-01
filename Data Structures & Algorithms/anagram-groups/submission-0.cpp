class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> str;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            str[key].push_back(s);

        }

        vector<vector<string>> ans;
        for(auto& pair: str){
            ans.push_back(pair.second);
        }
        return ans;
    }
};

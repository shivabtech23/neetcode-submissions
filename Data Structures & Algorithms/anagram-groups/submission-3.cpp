class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*brute force or better*/
        /*unordered_map<string,vector<string>> str;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            str[key].push_back(s);

        }

        vector<vector<string>> ans;
        for(auto& pair: str){
            ans.push_back(pair.second);
        }
        return ans;*/

        unordered_map<string,vector<string>> mp;
        for(string s : strs){
            int count [26]={0};
            for(char c:s){
                count[c-'a']++;
            }
        
             string key;
             for(int i=0;i<26;i++){
                     key+=to_string(count[i])+"#";
             }
              mp[key].push_back(s);
           }

        vector<vector<string>> ans;
        for(auto& entry:mp){
            ans.push_back(entry.second);
        }
    return ans;}
};

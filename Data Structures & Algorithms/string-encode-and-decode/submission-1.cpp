class Solution {
public:

    string encode(vector<string>& strs) {
    string result = "";
        for(int i = 0; i < strs.size(); i++){
            result += to_string(strs[i].size()) + "#" + strs[i];
        }
        return result;
    }

   vector<string> decode(string s) {
    vector<string> ans;
    for(int i = 0; i < s.size(); i++){
        int len = 0;                        // once, before while
        while(isdigit(s[i])){
            len = len*10 + (s[i]-'0');
            i++;
        }
        ans.push_back(s.substr(i + 1, len)); // i+1, and len
        i = i + len;
    }
    return ans;
}
};

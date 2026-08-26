class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for(int i = 0; i < strs.size(); i++) {
            encoded += to_string(strs[i].size()) + "#" + strs[i];
        }

        return encoded;
    }

    vector<string> decode(string encoded) {

        int i = 0;
        vector<string> ans;

        while(i < encoded.size()) {

            int len = 0;

            while(encoded[i] != '#') {
                len = len * 10 + (encoded[i] - '0');
                i++;
            }

            i++; // skip #

            string word = "";

            for(int j = 0; j < len; j++) {
                word += encoded[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};
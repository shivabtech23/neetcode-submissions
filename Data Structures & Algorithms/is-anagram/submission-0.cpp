class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> frqs;
        unordered_map<char,int> frqt;

        for(int i=0;i<s.length();i++){
            frqs[s[i]]++;
        }

        for(int j=0;j<t.length();j++){
            frqt[t[j]]++;
        }

        return frqs == frqt;
    }
};

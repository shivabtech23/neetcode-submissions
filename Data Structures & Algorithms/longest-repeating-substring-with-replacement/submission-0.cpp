class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>freq;
        int ans=0;
        int r=0;
        int l=0;
        int maxfreq=0;
        int n = s.size();
        while(r<n){
            freq[s[r]]++;
            maxfreq=max(maxfreq,freq[s[r]]);
            while((r-l+1)-maxfreq>k){
                freq[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
            
        }
    
    return ans;
    }
};

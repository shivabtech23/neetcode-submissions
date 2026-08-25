class Solution {
public:
    bool isAnagram(string s, string t) {
        int n_1=s.size();
        int n_2=t.size();
        unordered_map<int,int> freq_1;
        unordered_map<int,int> freq_2;

        if(n_1!=n_2){
            return 0;
        }

        for(int i=0;i<n_1;i++){
            freq_1[s[i]]++;
        }
        for(int j=0;j<n_2;j++){
            freq_2[t[j]]++;
        }
        
        for(int k=0;k<freq_2.size();k++){
            if(freq_1[k]!=freq_2[k]){
                return 0;
            }
            
        }

        return 1;
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;// remember this syntax
        }
        for(auto i:freq){ //remember this loop coz its easier to run an hash map 
            if(i.second>1){// it will tell you the value in the map just the dictionary 
                return true;
            }
        }
        return false;
    }
};
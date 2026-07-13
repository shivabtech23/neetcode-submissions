class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest = 0;
        for(int num : nums){
            if(!s.count(num-1)){
                int length =1;
                int current =num;
                while(s.count(current+1)){
                    length++;
                    current++;
                }
            longest=max(longest,length);}
           
        }
        return longest;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

      /*Brute force*/
       /* for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }

        return{};
    }*/

    /*Better*/
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        int num =nums[i];
        int Moreneed=target-num;
        if(mpp.find(Moreneed)!=mpp.end()){
            return{mpp[Moreneed],i};
        }
        mpp[num]=i;
    }
    return{-1,-1};}
};
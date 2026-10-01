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
    /*
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

    */

    /*optimal*/
    vector<pair<int,int>> arr;

    for(int i=0;i<n;i++){
        arr.push_back({nums[i],i});
    }

    int l=0;
    int r=n-1;

    sort(arr.begin(),arr.end());
    while(l<r){
        int sum=arr[l].first+arr[r].first;
        if(sum==target){
            return{min(arr[l].second, arr[r].second), max(arr[l].second, arr[r].second)};
        }
        else if(sum<target) l++;
        else r--;
    }
 return{};
    }

};
class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    vector<int> leftmax(n); 
    vector<int> rightmax(n); 
    vector<int> water(n); int sum=0;
    for(int i=0;i<n;i++)
    { if(i==0)
    { 
        leftmax[i]=height[i]; 
    } else{
        leftmax[i]=max(leftmax[i-1],height[i]); 
        }} 
    for(int i = n-1; i >= 0; i--)
    { if(i == n-1)
    { rightmax[i] = height[i]; } 
    else
    { 
        rightmax[i] = max(rightmax[i+1], height[i]);
    } }
    for(int k=0; k<n; k++)
    { water[k] = min(leftmax[k], rightmax[k]) - height[k]; sum += water[k]; 
    } return sum;  
    }
};

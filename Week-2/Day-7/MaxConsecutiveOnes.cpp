class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        
        int j=0;
        int len=0;
        int ans = 0;
        while(j<n){
            if(nums[j]==1)
                len++;
            else{
                ans = max(ans, len);
                len=0;
                
            }
            j++;
        }
        return max(ans,len);
        
    }
};
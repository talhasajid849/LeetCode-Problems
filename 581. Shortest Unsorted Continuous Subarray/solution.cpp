class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        int left = n;
        int mini = INT_MAX, maxi= INT_MIN;

        for(int i=0; i<n; i++){
            maxi = max(nums[i], maxi);
            if(nums[i] < maxi) right = i; 
        }

        for(int i = n-1; i>=0; i--){
            mini = min(nums[i], mini);
            if(nums[i] > mini) left = i; 
        }
        
        return right > left ? right - left +1 : 0;
    }
};
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return 0;

        int currEnd = 0, fatest = 0, jump = 0;

        for (int i = 0; i < n - 1; i++) {
            fatest = max(fatest, i + nums[i]);

            if (i == currEnd) {
                jump++;
                currEnd = fatest;
            }
        }
        return jump;
    }
};
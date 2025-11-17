class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        deque<int> dq;
        int res = INT_MAX;

        for (int j = 0; j <= n; j++) {

            while (!dq.empty() && prefix[j] - prefix[dq.front()] >= k) {
                res = min(res, j - dq.front());
                dq.pop_front();
            }

            while (!dq.empty() && prefix[j] <= prefix[dq.back()])
                dq.pop_back();

            dq.push_back(j);
        }

        return res == INT_MAX ? -1 : res;
    }
};
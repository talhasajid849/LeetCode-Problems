class Solution {
public:
    vector<vector<int>> result;

    void backTrack(vector<int>& curr, vector<bool>& used, vector<int>& nums){
        if(curr.size() == nums.size()){
            result.push_back(curr);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(used[i]) continue;

            used[i] = true;
            curr.push_back(nums[i]);

            backTrack(curr, used, nums);
            used[i] = false;
            curr.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<bool> used(nums.size(), false);
        backTrack(curr, used, nums);
        return result;
    }
};
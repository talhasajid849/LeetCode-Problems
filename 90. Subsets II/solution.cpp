class Solution {
public:
    vector<vector<int>> result;

    void backTrack(vector<int>& curr, int index, vector<int>&nums){
        result.push_back(curr);

        for(int i=index; i<nums.size(); i++){
            if(i > index && nums[i] == nums[i-1]) continue;

            curr.push_back(nums[i]);
            backTrack(curr, i+1, nums);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        backTrack(curr, 0, nums);
        return result;
    }
};
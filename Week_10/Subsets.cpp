// https://leetcode.com/problems/subsets/submissions/

class Solution {
public:
    void backtrack(vector<vector<int>>& res,vector<int>& nums, vector<int> cur, int idx){
        res.push_back(cur);
        for(int i = idx; i < nums.size(); i++){
            vector<int> c = cur;
            c.push_back(nums[i]);
            backtrack(res, nums, c , i + 1);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        backtrack(res, nums, cur, 0);
        return res;
    }
};

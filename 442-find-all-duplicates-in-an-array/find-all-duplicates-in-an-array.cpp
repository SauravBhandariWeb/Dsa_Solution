class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums){
        vector<int> ans;
        int n = nums.size();
        vector<int> flag;
        sort(nums.begin(), nums.end()); // here i'm sort first
        int i = 1;
        while (i < nums.size()) {
            if (nums[i - 1] == nums[i]) {
                ans.push_back(nums[i - 1]);
            }
            i++;
        }
        return ans;
    }
};
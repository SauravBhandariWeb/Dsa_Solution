class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> newarr;
        sort(nums.begin(), nums.end()); // sort for safety

        for (int i = nums.front(); i <= nums.back();
             i++) { // start from smallest
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                newarr.push_back(i);
            }
        }
    return newarr;
    }
};
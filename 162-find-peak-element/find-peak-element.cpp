class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int count=0;
        if (nums.size() == 1)
            return 0;
        else if (nums.size() == 2) {
            if (nums.front() > nums.back()) return 0;
            else  return 1;
        } else {
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i - 1] > nums[i]) return i - 1;
                else count++;
            }
        }
    return count;
    }
};
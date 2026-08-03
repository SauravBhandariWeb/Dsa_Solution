class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>pq(nums.begin(),nums.end());
        for (int i = 0; i <= nums.size(); i++) {
            if (pq.find(i) == pq.end())
                return i;
        }
        return -1;
    }
};

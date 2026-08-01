class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int check=0;
        for(int x : gain){
        check = check + x;
        ans=max(ans,check);
        }

    return ans;
    }
};
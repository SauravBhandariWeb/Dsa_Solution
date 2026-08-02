class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 1;
        while (i < s.length()) {
            if(s[i]=='1' && s[i-1]=='0')return false;
            i++;
        }
    return true;
    }
};
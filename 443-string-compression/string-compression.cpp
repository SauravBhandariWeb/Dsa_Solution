class Solution {
public:
    int compress(vector<char>& chars) {

        vector<char> check;
        int appear = 1;

        check.push_back(chars[0]);

        for (int i = 1; i < chars.size(); i++) {

            if (check.back() == chars[i]) {
                appear++;
            }
            else {

                if (appear > 1) {
                    string str = to_string(appear);

                    for (char c : str)
                        check.push_back(c);
                }

                // Start new character group
                check.push_back(chars[i]);
                appear = 1;
            }
        }

        // Process the last group
        if (appear > 1) {
            string str = to_string(appear);

            for (char c : str)
                check.push_back(c);
        }

        // Copy back to original array
        chars = check;

        return chars.size();
    }
};
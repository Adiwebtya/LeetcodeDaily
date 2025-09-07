class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) {
            cout << num << " ";
            if (s.find(num - 1) == s.end()) {
                int currNum = num;
                int streak = 1;

                while (s.find(currNum + 1) != s.end()) {
                    currNum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};


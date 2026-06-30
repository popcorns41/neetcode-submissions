class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sFreq(26, 0);
        vector<int> tFreq(26, 0);

        for (char c : s) {
            int index = c - 'a';
            sFreq[index]++;
        }

        for (char c : t) {
            int index = c - 'a';
            tFreq[index]++;
        }

        return sFreq == tFreq;
    }
};

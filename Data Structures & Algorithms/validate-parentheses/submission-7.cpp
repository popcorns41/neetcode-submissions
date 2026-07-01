class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;

        unordered_map<char, char> openToCloseParenMap;
        openToCloseParenMap['('] = ')';
        openToCloseParenMap['{'] = '}';
        openToCloseParenMap['['] = ']';

        for (char c : s) {
            if (openToCloseParenMap.contains(c)) {
                chars.push(c);
                continue;
            }

            if (chars.empty()) {
                return false;
            }

            if (openToCloseParenMap[chars.top()] == c) {
                chars.pop();
            } else {
                return false;
            }
        }

        return chars.empty();
    }
};
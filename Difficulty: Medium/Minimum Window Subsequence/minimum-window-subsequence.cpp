class Solution {
public:
    string minWindow(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        if (m > n) {
            return "";
        }
        int minLen = INT_MAX;
        int startIndex = -1;
        for (int i = 0; i < n; i++) {
            int p1 = i, p2 = 0;
            while (p1 < n && p2 < m) {
                if (s1[p1] == s2[p2]) {
                    p2++;
                }
                p1++;
            }
            if (p2 < m) {
            continue;
            }
            int end = p1 - 1;
            p1 = end;
            p2 = m - 1;
            while (p2 >= 0) {
                if (s1[p1] == s2[p2]) {
                    p2--;
                }
                p1--;
            }
            int start = p1 + 1;
            int windowLen = end - start + 1;
            if (windowLen < minLen) {
                minLen = windowLen;
                startIndex = start;
            }
            i = start;
        }
        if (startIndex == -1) return "";
        return s1.substr(startIndex, minLen);
    }
};

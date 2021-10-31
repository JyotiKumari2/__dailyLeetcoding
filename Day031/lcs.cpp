class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
        int n = s.length(), m = t.length();
        int DP[n + 1][m + 1];
        for (int i = 0; i <= n; ++i) 
            for (int j = 0; j <= m; ++j)  
                if (i == 0 || j == 0)  DP[i][j] = 0; 
                else if (s[i - 1] == t[j - 1])  DP[i][j] = DP[i - 1][j - 1] + 1;  
                else DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);  
        return DP[n][m];
    }
};
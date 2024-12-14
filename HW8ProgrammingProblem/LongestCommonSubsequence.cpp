#include <iostream>
#include <string>
#include <vector>
#include "GivenFiles/LongestCommonSubsequence.h"

using namespace std;

int findMaxSubSeqLen(string stringA, string stringB) {
    int m = stringA.size();
    int n = stringB.size();

    // create a DP table of size (m+1) x (n+1)
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    // fill table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (stringA[i - 1] == stringB[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];    // length of LCS
}

string findMaxSubSeq(string stringA, string stringB) {
    int m = stringA.size();
    int n = stringB.size();

    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (stringA[i - 1] == stringB[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // trace back to find the subsequence
    string result = "";
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (stringA[i - 1] == stringB[j - 1]) {
            result = stringA[i - 1] + result;
            --i;
            --j;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            --i;
        } else {
            --j;
        }
    }

    return result;
}

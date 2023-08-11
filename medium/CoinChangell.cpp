#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        std::vector<int> dp(amount + 1, 0);
        dp[0] = 1;  // Base case: 1 way to make amount 0 (using no coins)

        for (int coin : coins) {
            for (int i = coin; i <= amount; ++i) {
                dp[i] += dp[i - coin];
            }
        }

        return dp[amount];
    }
};
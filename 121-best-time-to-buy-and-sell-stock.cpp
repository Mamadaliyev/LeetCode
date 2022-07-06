#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int ans = 0;
        for(int i = 1; i < prices.size(); ++ i) {
            if(prices[i] - mn > ans) ans = prices[i] - mn;
            mn = min(prices[i], mn);
        }
        return ans;
    }
};
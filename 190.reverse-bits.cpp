#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        int p = 31;
        
        unsigned int ans = 0;
        
        while(n) {
            int r = n & 1;
            ans += r * (1 << p);
            n >>= 1;
            p--;
        }
        
        return ans;
    }
};
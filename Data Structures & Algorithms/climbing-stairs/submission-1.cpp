class Solution {
public:
    std::vector<int> memo = std::vector<int>(46, -1);
    int climbStairs(int n) {
        if(n == 1){return 1;}
        if(n == 2){return 2;}
        if(memo[n] != -1){return memo[n];}
        memo[n] = climbStairs(n-1) + climbStairs(n-2);
        return memo[n];
    }
};

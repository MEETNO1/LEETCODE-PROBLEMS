// #include<iostream>
// #include<vector>
// using namespace std;

// class Soultion {
//     public:
//     int fibo(int n, vector<int> &dp){
//         if(n <= 1) return n;
//         if(dp[n] != -1) return dp[n];
//         return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
//     }
//     int f(int n){
//         vector<int> dp(n+1, -1);
//         return fibo(n, dp);
//     }
// }

// tabulation
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
//     public:
//     int f(int n){
//         if(n <= 1) return n;
//         int dp[n+1];
//         for(int i=0;i<=n;i++){
//             if(i <= 1) dp[i] = i;
//             else
//             dp[i] = dp[i-1] + dp[i-2];
//         }
//         return dp[n];                                                                                                                                   
//     }
// };

// Min cost climbing stairs

// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
//     public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n+1, 0);
//         dp[0] = 0;
//         dp[1] = 0;
//         for(int i=2;i<=n;i++){
//             dp[i] = min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2]);
//         }
//         return dp[n];
//     }
// }

// #include <bits/stc++.h>
// using namespace std;

// int main(){
//     int n ;
//     cin >> n;

//      (x > 0){
//         for(int i =1 ; i<= n; i++){
//             while(x > 0) {
//                 for( int d =1; d<= 6; d++ ){
//                 dp[0] = 0;
//                 if( s - d) = 0;
//                 dp[i] = min( dp[i] , 1+ dp[i-d]) % MOD
//                 }
//             }
//         } 
//      }
// }
// class Solution
// {
// public:
//     static const int mod = 1000000007;
//     vector<vector<long long>> dp;

//     long long f(int n, int k, int t)
//     {
//         if (n == 0 && t == 0)
//             return 1;
//         if (n == 0 || t < 0)
//             return 0;

//         if (dp[n][t] != -1)
//             return dp[n][t];

//         long long sum = 0;
//         for (int v = 1; v <= k; v++)
//         {
//             sum = (sum + f(n - 1, k, t - v)) % mod;
//         }
//         return dp[n][t] = sum;
//     }

//     int numRollsToTarget(int n, int k, int target)
//     {
//         dp.assign(n + 1, vector<long long>(target + 1, -1));
//         return (int)f(n, k, target);
//     }
// };

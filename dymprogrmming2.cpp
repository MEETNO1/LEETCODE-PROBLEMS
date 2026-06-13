#include<iostream>
#include<vector>
using namespace std;

// class Solution {
//     public int maxLoot(int arr[] , int idx, int[] dp){
//         if(idx >= arr.length) return 0;
//         if(dp[idx] != -1) return dp[idx];
//         int steal = arr[idx] + maxLoot(arr, idx + 2);
//         int notSteal = 0 + maxLoot(arr, idx + 1);
//         return Math.max(steal, notSteal);
//     }
//     public int findMaxLoot(int arr[] , int n){
//         int[] dp = new int[arr.length];
//         return maxLoot(dp,-1);
//         return maxLoot(arr, 0, dp);
//     }
// }

// }
// class Solution
// {

// public
//     int maxLoot(int[] arr, int idx, int[] dp)
//     {
//         if (idx >= arr.length)
//             return 0;
//         if (dp[idx] != -1)
//             return dp[idx];

//         int steal = arr[idx] + maxLoot(arr, idx + 2, dp);
//         int notSteal = maxLoot(arr, idx + 1, dp);

//         return dp[idx] = Math.max(steal, notSteal);
//     }

// public
//     int findMaxLoot(int[] arr, int n)
//     {
//         int[] dp = new int[n];
//         for (int i = 0; i < n; i++)
//             dp[i] = -1;
//         return maxLoot(arr, 0, dp);
//     }
// }

// class Solution {
//     public int nthFibonacci(int n, vector<int>& dp) {
//        int[] dp = new int[n + 1];
//      if(n>0)  dp[1] = 1;
//        for(int i = 2; i <= n; i++) {
//            dp[i] = dp[i - 1] + dp[i - 2];
//        }
//        return dp[n];
//     }
// }

// class Solution {
//     static class Edge {
//         int src;
//         int dest;
//         int wt;
//     }
//     int main(){
//         int V= 4;
//         Array<Edge> graph = new Array<Edge>(V);
//         for(int i = 0; i < V; i++){
//             graph[i] = new Array<Edge>();
//         }
//     }
// }

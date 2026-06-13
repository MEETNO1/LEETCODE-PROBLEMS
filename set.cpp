// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int subarraySum(vector<int> &arr, intk)
//     {
//         int n = arr.size();
//         pre[0] = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             pre[i] = pre[i - 1] + arr[i];
//         }
//         Inordered_map<int, int> mp;
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (pre[i] == k)
//             {
//                 count++;
//             }
//             int rem = pre[i] - k;
//             if (mp.find(pre[i] - k) != mp.end())
//             {
//                 count += mp[pre[i] - k];
//             }
//             mp[pre[i]]++;
//         }
//         return count;
//     }
// };


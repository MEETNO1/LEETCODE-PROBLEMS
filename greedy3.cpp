// #include<stdio.h>

// int main(){

//  class Solution

// public:
//     static bool cmp(const vector<int> &a, const vector<int> &b)
//     {
//         return a[0] < b[0]; // sort by starting time
//     }

//     vector<vector<int>> merge(vector<vector<int>> &intervals)
//     {
//         // पहले sort करो
//         sort(intervals.begin(), intervals.end(), cmp);

//         vector<vector<int>> result;
//         int n = intervals.size();

//         result.push_back(intervals[0]); // पहले interval डाल दो

//         for (int i = 1; i < n; i++)
//         {
//             vector<int> &last = result.back(); // last inserted interval
//             vector<int> &curr = intervals[i];  // current interval

//             if (curr[0] <= last[1])
//             {
//                 // merge करना है
//                 last[1] = max(last[1], curr[1]);
//             }
//             else
//             {
//                 // नया interval डालो
//                 result.push_back(curr);
//             }
//         }

//         return result;
//     }
//     return0;
// }

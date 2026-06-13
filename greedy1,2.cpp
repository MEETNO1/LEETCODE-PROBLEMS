// #include<stdio.h>
// #include<vector>
// #include<algorithm>

// using namespace std;

// bool cmp(int x , int y){
//     double r1 = (p1.first * 1.0) / (p1.second*1.0);
//     double r2 = (p2.first * 1.0) / (p2.second*1.0);
//     return r1 > r2;
// }

// double fractionalKnapsack(vector<pair<int,int>> &profile, vector<int> &weights, int n, int w){
//     vector<pair<int,int> > arr;
//     for(int i = 0;i < n; i++){
//         arr.push_back({profile[i].first, weights[i]});
//     }
//     sort(items.begin(), items.end(), cmp);
//     double profit = 0;
//     for(int i = 0;i < n;i++){
//         if(arr[i].second <= w){
//             profit += arr[i].first;
//             w -= arr[i].second;
//         } else {
//            profit += (arr[i].first * (w*1.0)/(arr[i].second*1.0))*W;
//            W = 0;
//            break;
//         }
//     }
//     return  result;
// }

// int main(){
//     vector<int> profit = {60, 100, 120};
//     vector<int> weights = {10, 20, 30};
//     int W = 50;
//     int n= 3;
//     cout<<fractionalKnapsack(profit, weights, n, W);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // time complexity: O(n log n) due to sorting
// // space complexity: O(n) for storing items
// // Comparator: sort by profit/weight ratio
// bool cmp(pair<int, int> p1, pair<int, int> p2)
// {
//     double r1 = (double)p1.first / p1.second;
//     double r2 = (double)p2.first / p2.second;
//     return r1 > r2; // descending order
// }

// double fractionalKnapsack(vector<int> &profit, vector<int> &weight, int n, int W)
// {
//     vector<pair<int, int>> arr;
//     for (int i = 0; i < n; i++)
//     {
//         arr.push_back({profit[i], weight[i]});
//     }

//     // sort by profit/weight ratio
//     sort(arr.begin(), arr.end(), cmp);

//     double maxProfit = 0.0;
//     int w = W;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i].second <= w)
//         {
//             // take whole item
//             maxProfit += arr[i].first;
//             w -= arr[i].second;
//         }
//         else
//         {
//             // take fraction
//             maxProfit += arr[i].first * ((double)w / arr[i].second);
//             break;
//         }
//     }

//     return maxProfit;
// }

// int main()
// {
//     vector<int> profit = {60, 100, 120};
//     vector<int> weight = {10, 20, 30};
//     int W = 50;
//     int n = 3;

//     cout << fractionalKnapsack(profit, weight, n, W);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// bool cmp(int x , int y){
//     return x > y;
// }

// ll minCostToBreak(int n, int m, vector<ll> &horizontal, vector<ll> &vectical){
//     sort(horizontal.begin(), horizontal.end(), cmp);
//     sort(vectical.begin(), vectical.end(), cmp);
//     ll h = 0, v = 0;
//     ll cost = 0;
//     while(h < m-1 && v < n-1){
//         if(horizontal[h] > vectical[v]){
//             cost += (horizontal[h] * (v+1));
//             h++;
//         } else {
//             cost += (vectical[v] * (h+1));
//             v++;
//         }
//     }
//     while(h < m-1){
//         cost += (horizontal[h] * (v+1));
//         h++;
//     }
//     while(v < n-1){
//         cost += (vectical[v] * (h+1));
//         v++;
//     }
//     return cost;
// }
 
// int main(){

//     int n,m;
//     cin>>n>>m;
//     vector<ll> horizontal,vectical;
//     for(inti=0;i < m-1;i++){
//         int x;
//         cin>>x;
//         horizontal.push_back(x);
//     }
//     for(int i=0;i < n-1;i++){
//         int y;
//         cin>>y;
//         vectical.push_back(y);
//     }
// return 0;

// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
    

// class Solution {
//     public:
//     int minMeetings(int start[], int end[], int n) {
//         vector<pair<int, int>> meetings;
//         for (auto el : intervals) {
//             start.push_back(el[0]);
//             ending.push_back(el[1]);
//         }
//         sort(start.begin(), start.end());
//         sort(ending.begin(), ending.end());

//         int ans = 0;
//         int rooms = 0;
//         int i = 0, j = 0;
//         while( i <start.size() && j < ending.size()) {
//             if (start[i] < ending[j]) {
//                 rooms++;
//                 i++;
//             } else {
//                 rooms--;
//                 j++;
//             }else if(start[i] == ending[j]) {
//                 i++;
//                 j++;
//             }
//             ans = max(ans, rooms);
//         }
//         int count = 1; // First meeting always gets selected
//         int lastEndTime = meetings[0].first;
        
//         for (int i = 1; i < n; i++) {
//             if (meetings[i].second > lastEndTime) {
//                 count++;
//                 lastEndTime = meetings[i].first;
//             }
//         }
        
//         return count;
//     }
// }
//     return 0;
// }

include<iostream>
#include<vector>
using namespace std;

int main(){
    
}
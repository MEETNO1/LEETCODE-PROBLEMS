#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// int main() {
//     int arr[] = {7, 10, 4, 3,-7, 20,-4, 15};
//     int k = 4;
//     int n = sizeof(arr) / 4;
//     priority_queue<int>pq;
//     for(int i=0; i<n; i++) {
//         pq.push(arr[i]);
//         if(pq.size() > k) 
        
//                 pq.pop();
//             }
//             cout <<pq.top() << endl; // Output the kth smallest element
//         }
    
// leetocde-215
// int main() {
//     int arr[] = {10,200,-4,6,18,2,105,118};
//     int k = 3;
//     int n = sizeof(arr) / 4;
//     priority_queue<int>vector<int>,greater<int>>pg; // Max-Heap to find kth smallest element
//     for (int i = 0; i < n; i++) {
//         pq.push(arr[i]);
//         if (pq.size() > k) 
//             pq.pop(); // Remove the largest element if size exceeds k
//         }
    
//     cout << pq.top() << endl; // Output the kth smallest element
//     return 0;
// }
// //     return 0;
// sort(arr.begin(), arr.end());
    // cout << arr[k-1] << endl; // Output the kth smallest element

    // class Solution {
    //     public:
    //     typedef pair<int,pair<int,int>>pair>>
    //     vector<int>smallestRange(vector<vector<int>>& arr) {
    //         priority_queue<pip,vector<pip>,greater<pip>> pq;
    //         int mx = INT_MIN;
    //         for(int i=0;i<arr.size();i++){
    //             mx = max(mx,arr[i][0]);
    //             pq.push({arr[i]}[0],{i,0});
    //         }
    //         int mn = pq.top().first;
    //         int start = mn, end = mx;
    //         while(true){
    //             mn = pq.top().first;
    //             int row = pq.top().second.first;
    //             int col = pq.top().second.second;
    //             pq.pop();
    //             pq.push({arr[row][col+1],{row,col+1}});
    //             mx = max(mx,arr[row][col+1]);
    //             mn = pop.top()first;
    //             if(mx-mn < end-start){
    //                 end = mx;
    //                 start = mn;
    //             }
    //         }        }


    // };
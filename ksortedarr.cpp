#include<iostream>
#include<queue>
#include<vector>    
using namespace std;  

int main() {
    int arr[] = {7, 10, 4, 3, , 20, , 15};
    int k = 4;
    int n = sizeof(arr) / 4;
    priority_queue< int  vector<int>,greater<int> >pq; // Max-Heap to find kth smallest element
    //   vector<int> ans;
    int idx=0;
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if(pq.size() > k) {
            ans.push_back(pq.top());
            pq.pop(); // Remove the largest element if size exceeds k
        }
    }
    while(pq.size() > 0) {
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " "; // Output the kth smallest element
    }
    return 0;
    // Output the kth smallest element
}
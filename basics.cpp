// #include<iostream>
// #include<vector>
// using namespace std;
// class MinHeap {
//     public:
//     vector<int> arr;
//     int idx;
//     MinHeap(int x) {
//         idx = 1; // Start from index 0 for vector
//         vector<int> arr(x, 0); // Initialize vector with size x and default value 0
//         for(int i=1;i<=25;i++){


//         }
        
//     }
//     int top() {
//        idx=1;
//        arr(25,0);
//     }
//     int top(){
//         retrun arr[1];
//     }
//     void push(int x) {
//         arr.push_back(x); // Add element to the end of the vector
//         int i = idx;
//         idx++;
//         while(i > 1) {
//             if(arr[i] < arr[i / 2]) {
//                 swap(arr[i], arr[i / 2]);
//                 i = i / 2;
//             } else {
//                 break;
//             }
//         }
//     }

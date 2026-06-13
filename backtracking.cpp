// #include<iostream>
// #include<vector>
// using namespace std;
//  void merge(int a[], int b[], int res[]){
//     int i =0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             res[k]=a[i];
//             i++;
//             k++;
//         }
//         else{
//             res[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//  } 
//  int main(){
//     int arr = {1,4,5,8};
//     int n1 = sizeof(arr)/sizeof(arr[0]);
//     vector<int> a(arr,arr+n1);
//     for(int i=0;i<n1;i++){
//         cout<<a[i]<<" ";
//     }
//     int brr = {2,3,6,7,10,12};
//     int n2 = sizeof(brr)/sizeof(brr[0]);
//     vector<int> res(n1+n2);
//     for(int i=0;i<n2;i++){
//         merge(a,brr,res);
//     }

//  }


// void merge(vector<int>& v){
//     int n = v.size();
//     if (n==1) return;
//     int n1 = n/2, n2 = n - n/2;
//     vector<int> a(n1), b(n2);

//     for (int i=0; i<n1; i++) a[i] = v[i];
//     for (int i=0; i<n2; i++) b[i] = v[n1 + i];
//     merge(a);
//     merge(b);
//     int i=0, j=0, k=0;

//     mergesort(a);
//     mergesort(b);
//     merge(a, b, v);
// }

// #include<iostream>
// #include<vector>
// void quicksort(int arr[] int si, int ei){
//     int pivotIdx = partition(arr,si,end);
//     int pivot = 

// }
// int main(){
//      int arr[] = {5,4,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }#include<iostream>
// #include<vector>


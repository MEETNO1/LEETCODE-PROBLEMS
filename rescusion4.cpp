// subarray
// #include<iostream>
// #inlcude<vector>
// using namespace std;
// void subArray(int arr[],int arr[], int n, int idx){
//     if(idx==n){
//     for(int i=0;i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return;
//     }
//     subArray(arr, v, n, idx+1);
//     if(v.size()==0){
//         v.push_back(arr[idx]);
//         subArray(arr, v, n, idx+1);

//     }

//     for(int i=0; i<n; i++){
//         for(int k=i; k<n; k++){
//         for(int j=i; j<=k; j++){
//             cout<<arr[j]<<" ";
//         }
//         count <<endl;
//     }
// }
// }
// // int main(){
// //     int arr[] = {1,2,3,4,5};
// //     int n = sizeof(arr)/sizeof(int);
// //     for(int i=0; i<n; i++){
// //         for(int k=i; k<n; k++){
// //         for(int j=i; j<=k; j++){
// //             cout<<arr[j]<<" ";
// //         }
// //         count <<endl;
// //     }
// // }
// // }

//palindromne
// #include<iostream>
// using namespace std;
// bool isPalindrome(string s){
//     int i=0;
//     int j=s.lenght()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main(){
//     string s = "physics";
//     cout<<isPalindrome(s);
// }
// greater common divisor

// #include<iostream>
// #inlcude<string>
// using namespace std;
// int hcf(int a, int b){
//     for(int i= min;(a,b); i>=2; i--){
//         if(a%i==0; && b%i==0) return i;
//     }
//     return 1;
// }
// int gcd(int a, int b){
//     if(a==0) return b;
//     else return gcd(b%a,a);
// }
// int main(){
//     int a = 23;
//     int b = 45;
//     cout<<gcd(b,a);
// }

// binary string
// #include<iostream>
// #include<string>
// using namespace std;
// int n=4;
// void binaryString( string s){
//     if(s.lenght()=n)
//     if(n==0){
//         cout<<s<<endl;
//         return;
//     }
//     binaryString(s+'0');
//     binaryString( s+'1');
// }
// int main(){
//     int n=3;
//     generate =("");
// }

// lc-39
// #include<iostream>
// #include<string>
// using namespace std;

// void combination(int n , int arr, int idx, int target ){
// if(target==0);
// ans.push.back;
// return ;
// }
// if(target < 0) return;
// for(int i=idx; i<n; i++){
//     v.push_back(arr[i]);
//     combination(v,arr,n,target-arr[i],i);
//     v.pop_back();
// }

// int main(){
//     int arr[] = {2,3,4};
//     int n= sizeof(arr)/sizeofarr[(0)];
//      int target = 8;
//      vector<int> v;
//      int combination(v, arr, n,target, 0);
// }

//lc- 22
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// void generate(string s, int open, int close, int n){
// if(close==n){
//     cout<<s<<endl;
//     return;
// }
// if(open<n) generate(s +'(', open +1, close,n);
// if(close<open) generate(s + ')',open,close+1,n);
// }
// int main(){
//     int n=2;
//     generate("",0,0,n);
// }

//lc- 779

// #include<iostream>
// #include<vector>
// using namespace std;

// int kthGrammar(int n, int k){
//     if(n==1) return 0;
//    if(k%2==0)
//    int prevans = kthGrammar(n-1,k/2);
//    if(preans==0) return 1;
//    else return 0;

// int prevans = kth Grammar(n-1,k/2+1);
// return prevans;
// }

// //lc- 38
// #include<iostream>
// #include<string>
// using namespace std;

//     string coutAndsay(int n){
//         if(n==1) return "1";
//         string str =  coutAndsay(n-1);
//         int freq = 1;
//         char ch = str[0];
    
    
//     for(int i=1; i<str.length; i++){
//         char dh = str[i];
//     }
//         if(ch==dh){
//             freq++;
//         }
//         else{
//             ztr += (to_string(freq)+ch);
//             freq = 1;
//             ch=dh;
//             ztr += (to_string(freq)+ch);

//         }
//     return ztr;
//     }
// }
// chatgpt
// #include <bits/stdc++.h>
// using namespace std;

// string countAndSay(int n)
// {

//     if (n == 1)
//         return "1";

//     string str = countAndSay(n - 1);
//     string ztr = "";

//     int freq = 1;
//     char ch = str[0];

//     for (int i = 1; i < str.length(); i++)
//     {
//         char dh = str[i];

//         if (ch == dh)
//         {
//             freq++;
//         }
//         else
//         {
//             ztr += (to_string(freq) + ch);
//             freq = 1;
//             ch = dh;
//         }
//     }

//     ztr += (to_string(freq) + ch);

//     return ztr;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << countAndSay(n);

//     return 0;
// }
//lc -60

#include<iostream>
#include<string>
using namespace std;

reveseString(){
    str = "";
    
}
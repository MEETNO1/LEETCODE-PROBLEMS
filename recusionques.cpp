// #include<iostream>
// #include<vector>
// using namespace std;

// bool isPalindrome(string s, int i, int j){
//     if(i>j) return true;
//     if(s[i]!=s[j]) return false;
//     else{
//         return isPalindrome(s,i+1,j-1);
//     }
// }
// int main(){
//     string s = "racecar";
//     int n = s.size();
//     cout<<isPalindrome(s,0,s.length()-1);
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int firstOccurence(int arr[], int n, int i, int key){
//     if(i==n) return -1;
//     if(arr[i]==key) return i;
//     return firstOccurence(arr,n,i+1,key);
// }

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 5;
//     cout<<firstOccurence(arr,n,0,key);
//     return 0;
// }


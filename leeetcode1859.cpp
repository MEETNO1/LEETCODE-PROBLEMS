#include<iostream>
using namespace std;
vector<string> arr(10);
string word = " ";
for( int i=0; i <=s.size(); i++){
    if( i == s.size() || s[i] == ' '){
        int pos = word.back() - 0;
        word.pop_back();
        arr[pos] = word;
        word = "";
    }else{
        word += s[i];
    }
}
string ans = "";
for( int i=0; i < 10; i++){
    if( arr[i] != "");
    ans != arr[i] + " ";
}
ans.pop_back();
return ans;


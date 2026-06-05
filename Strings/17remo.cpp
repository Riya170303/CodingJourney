#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string res="";
    map<char,int> freq;
for(char ch : s){
    if(freq[ch] == 0){  // pehli baar aa raha hai
        res += ch;
        freq[ch]++;
    }
}
    

cout<<res;
}
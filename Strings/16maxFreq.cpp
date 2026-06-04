#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int>freq;
    for(char ch:s){
        freq[ch]++;
    }
    char maxChar;
    int maxFreq=0;
    for(auto x:freq){
        if(x.second>maxFreq){
            maxFreq=x.second;
            maxChar=x.first;
        }
    }
    cout<<maxChar;
}
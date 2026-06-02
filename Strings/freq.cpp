#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    
    map<char,int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    
    for(auto x : freq){
        if(x.first != ' ')
            cout << x.first << " -> " << x.second << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word,largest="";
    getline(cin,s);
    stringstream ss(s);
    while (ss>>word){
        if (word.length()>largest.length()){
            largest=word;
        }
    }
    cout<<largest;
    
    
}
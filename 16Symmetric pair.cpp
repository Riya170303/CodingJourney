#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    pair<int,int> arr[n];
    for(int i=0; i<n; i++) cin >> arr[i].first >> arr[i].second;
    
    unordered_map<int,int> mp;
    
    for(int i=0; i<n; i++){
        int a = arr[i].first;
        int b = arr[i].second;
        
        if(mp.count(b) && mp[b] == a){
            cout << "(" << b << "," << a << ")" << " ";
        } else {
            mp[a] = b;
        }
    }
    return 0;
}
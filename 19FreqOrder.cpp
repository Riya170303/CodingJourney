#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
     for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // step 1: freq map
map<int,int> freq;
for(int i=0; i<n; i++) freq[arr[i]]++;

// step 2: pairs vector mein daalo
vector<pair<int,int>> v(freq.begin(), freq.end());

// step 3: frequency ke hisaab se sort karo
sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
    return a.second > b.second; // higher freq pehle
});

// step 4: print karo
for(auto x : v){
    for(int i=0; i<x.second; i++){
        cout << x.first << " ";
    }
}
return 0;
}

    
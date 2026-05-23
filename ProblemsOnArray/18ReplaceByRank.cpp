#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
     for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> temp(arr,arr+n);
    sort(temp.begin(),temp.end());
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[temp[i]] = i+1;
    }
    for(int i=0; i<n; i++){
        cout << mp[arr[i]] << " ";
    }
    return 0;
}


        
        
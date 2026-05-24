#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++) cin >> arr1[i];
    
    cin >> m;
    int arr2[m];
    for(int i=0; i<m; i++) cin >> arr2[i];
    
    // step 1: freq map of arr1
    map<int,int> freq;
    for(int i=0; i<n; i++) freq[arr1[i]]++;
    
    // step 2: arr2 ke order mein print karo
    for(int i=0; i<m; i++){
        if(freq.count(arr2[i])){
            for(int j=0; j<freq[arr2[i]]; j++){
                cout << arr2[i] << " ";
            }
            freq.erase(arr2[i]); // processed, remove karo
        }
    }
    
    // step 3: remaining elements sorted print karo
    for(auto x : freq){
        for(int j=0; j<x.second; j++){
            cout << x.first << " ";
        }
    }
    
    return 0;
}
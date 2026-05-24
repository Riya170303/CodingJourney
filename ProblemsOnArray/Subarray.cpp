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
    
    // step 1: arr1 set mein daalo
    set<int> s(arr1, arr1+n);
    
    // step 2: arr2 ka har element check karo
    bool isSubset = true;
    for(int i=0; i<m; i++){
        if(s.find(arr2[i]) == s.end()){
            isSubset = false;
            break;
        }
    }
    
    if(isSubset) cout << "Yes, subset hai!";
    else cout << "No, subset nahi hai!";
    
    return 0;
}
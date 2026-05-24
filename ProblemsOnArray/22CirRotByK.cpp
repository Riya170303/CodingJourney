//same as reverse array in group of k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    cin >> k;
    k = k % n; // agar k > n ho toh handle karta hai
    
    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    
    return 0;
}
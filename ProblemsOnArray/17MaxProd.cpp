#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    int maxProd = arr[0];
    int minProd = arr[0];
    int result  = arr[0];
    
    for(int i=1; i<n; i++){
        int temp = maxProd;
        maxProd = max({arr[i], maxProd*arr[i], minProd*arr[i]});
        minProd = min({arr[i], temp*arr[i],    minProd*arr[i]});
        result  = max(result, maxProd);
    }
    
    cout << result;
    return 0;
}
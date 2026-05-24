#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[], int n, int k){
    if(n == 0) return;
    k = k % n;
    
    // step 1: pehle k elements temp mein
    int temp[k];
    for(int i=0; i<k; i++) temp[i] = arr[i];
    
    // step 2: baaki elements left shift
    for(int i=0; i<n-k; i++) arr[i] = arr[i+k];
    
    // step 3: temp wale end mein
    for(int i=n-k; i<n; i++) arr[i] = temp[i-n+k];
}

void rotateRight(int arr[], int n, int k){
    if(n == 0) return;
    k = k % n;
    
    // step 1: last k elements temp mein
    int temp[k];
    for(int i=0; i<k; i++) temp[i] = arr[n-k+i];
    
    // step 2: baaki elements right shift
    for(int i=n-1; i>=k; i--) arr[i] = arr[i-k];
    
    // step 3: temp wale start mein
    for(int i=0; i<k; i++) arr[i] = temp[i];
}

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> k;
    
    rotateLeft(arr, n, k);
    cout << "Left: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    
    // reset array for right rotation
    for(int i=0; i<n; i++) cin >> arr[i];
    
    rotateRight(arr, n, k);
    cout << "Right: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    
    return 0;
}
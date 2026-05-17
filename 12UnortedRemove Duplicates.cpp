sort(arr, arr+n);  // pehle sort karo
// phir same logic
int k = 0;
for(int j=1; j<n; j++){
    if(arr[k] != arr[j]){
        k++;
        arr[k] = arr[j];
    }
}
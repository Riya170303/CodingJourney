#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    sort(arr,arr+n);
    double median=0;
    if(n%2==0){ median = (double)(arr[(n/2)-1]+arr[(n/2)])/2;}
    else {median=(arr[n/2]);}

    cout<<median;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxval=arr[0];
    for(int i=0;i<n;i++){      // fix 1
        if(arr[i]>maxval)
           maxval=arr[i];
    }
    cout<<maxval;              // fix 2
    return 0;
}
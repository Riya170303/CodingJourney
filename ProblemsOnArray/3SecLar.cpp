#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=arr[0],secMax=INT_MIN;
    int mini=arr[0],secMin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            secMax=maxi;
            maxi=arr[i];
        }    
        else if(arr[i]>secMax && arr[i]!=maxi){
            secMax=arr[i];
        }
        if(arr[i] < mini){
        secMin = mini;
        mini = arr[i];
    } else if(arr[i] < secMin){
        secMin = arr[i];
    }

            
        
    }
    cout<<secMax<<endl;
    cout<<secMin<<endl;
    return 0;
}
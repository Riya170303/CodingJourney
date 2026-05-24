#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
        int leftsum=0;
        for(int i=0;i<n;i++){
            int rightsum=sum-leftsum-arr[i];
        
    
    if(leftsum==rightsum) {cout<<"Equilibrium Index"<<i;}
    
    leftsum +=arr[i];
    }
    return 0;
}

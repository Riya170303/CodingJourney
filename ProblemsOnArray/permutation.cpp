#include<bits/stdc++.h>
using namespace std;
int factorial(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        
        f=f*i;
        
    }
    return f;
}
int main(){
    int a,n,r,p;
    cin>>n>>r;
    p=factorial(n)/factorial(n-r);
    cout<<"permuatation"<<" "<<p;
    
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    // bits count karo
    int bits = log2(n) + 1;
    
    // mask banao - sab 1s
    int mask = (1 << bits) - 1;
    
    // XOR se toggle karo
    cout << (n ^ mask);
    
    return 0;
}
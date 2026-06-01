#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int v=0,c=0,sp=0;
    for(char ch:s){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            v++;
        }
        else if(ch==' '){
            sp++;
        }
        else c++;
    }
    cout<<v<<","<<sp<<","<<c;
}
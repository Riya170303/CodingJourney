class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int depth=0;
        for(char ch:s){
            if(ch=='(') ++depth;
            if(depth>1) result+=ch;
            if(ch==')') --depth;
        }
        return result;
    }
};
class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        
        vector<int> suf(n2 + 1, INT_MAX);
        suf[n2] = n1;
        int j = n2 - 1;
        for (int i = n1 - 1; i >= 0 && j >= 0; i--) {
            if (word1[i] == word2[j]) {
                suf[j] = i;
                j--;
            }
        }
        
        vector<int> ans;
        int k = 0;
        bool usedChange = false;
        
        for (int i = 0; i < n1 && k < n2; i++) {
            if (word1[i] == word2[k]) {
                ans.push_back(i);
                k++;
            } 
            else if (!usedChange && suf[k + 1] != INT_MAX && suf[k + 1] >= i + 1) {
                // ✅ fixed: baaki word2 word1[i+1:] mein fit ho sakta hai
                ans.push_back(i);
                k++;
                usedChange = true;
            }
        }
        
        if (k == n2) return ans;
        return {};
    }
};
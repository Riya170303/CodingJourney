class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sumMin = 0, sumMax = 0;

        stack<int> st;

        // ---------- SUM OF MINIMUMS ----------
        vector<int> leftMin(n), rightMin(n);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i])
                st.pop();

            leftMin[i] = st.empty() ? i + 1 : i - st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i])
                st.pop();

            rightMin[i] = st.empty() ? n - i : st.top() - i;
            st.push(i);
        }

        // ---------- SUM OF MAXIMUMS ----------
        while (!st.empty()) st.pop();

        vector<int> leftMax(n), rightMax(n);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i])
                st.pop();

            leftMax[i] = st.empty() ? i + 1 : i - st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i])
                st.pop();

            rightMax[i] = st.empty() ? n - i : st.top() - i;
            st.push(i);
        }

        // Contributions
        for (int i = 0; i < n; i++) {
            sumMin += 1LL * nums[i] * leftMin[i] * rightMin[i];
            sumMax += 1LL * nums[i] * leftMax[i] * rightMax[i];
        }

        return sumMax - sumMin;
    }
};
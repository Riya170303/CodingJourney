class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int num = n; ; num++) {
            int product = 1;
            int temp = num;
            while (temp > 0) {
                int d = temp % 10;
                product *= d;
                temp /= 10;
            }
            if (product % t == 0) return num;
        }
    }
};
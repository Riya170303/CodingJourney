class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int x : asteroids) {

            bool destroyed = false;

            // Collision possible only: + then -
            while (!st.empty() && st.back() > 0 && x < 0) {

                if (st.back() < abs(x)) {
                    // Stack wala asteroid destroy
                    st.pop_back();
                }
                else if (st.back() == abs(x)) {
                    // Dono destroy
                    st.pop_back();
                    destroyed = true;
                    break;
                }
                else {
                    // Current asteroid destroy
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(x);
            }
        }

        return st;
    }
};
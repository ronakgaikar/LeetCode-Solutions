//Brute-force

// class Solution {
// public:
//     long long subArrayRanges(vector<int>& nums) {
//         int n = nums.size();
//         long long result=0;

//         for(int i=0; i<n; i++){

//             int largest = nums[i];
//             int smallest = nums[i];

//             for(int j=i; j<n; j++){

//                 largest = max(largest, nums[j]);
//                 smallest = min(smallest, nums[j]);

//                 result += (largest-smallest);
//             }
//         }
//         return result;
//     }
// };



//optimal solution
class Solution {
public:

    vector<int> findNGE(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if (st.empty())
                nge[i] = n;
            else
                nge[i] = st.top();

            st.push(i);
        }

        return nge;
    }

    vector<int> findPGE(vector<int>& nums) {
        int n = nums.size();
        vector<int> pge(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            if (st.empty())
                pge[i] = -1;
            else
                pge[i] = st.top();

            st.push(i);
        }

        return pge;
    }

    vector<int> findNSE(vector<int>& nums) {
        int n = nums.size();
        vector<int> nse(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();

            st.push(i);
        }

        return nse;
    }

    vector<int> findPSE(vector<int>& nums) {
        int n = nums.size();
        vector<int> pse(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            if (st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        vector<int> nge = findNGE(nums);
        vector<int> pge = findPGE(nums);

        vector<int> nse = findNSE(nums);
        vector<int> pse = findPSE(nums);

        long long sumMax = 0;
        long long sumMin = 0;

        for (int i = 0; i < n; i++) {

            long long leftMax = i - pge[i];
            long long rightMax = nge[i] - i;

            long long leftMin = i - pse[i];
            long long rightMin = nse[i] - i;

            sumMax += (long long)nums[i] * leftMax * rightMax;

            sumMin += (long long)nums[i] * leftMin * rightMin;
        }

        return sumMax - sumMin;
    }
};
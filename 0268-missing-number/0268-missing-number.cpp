class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n = nums.size();
        int xor_sum = n; // Start with n, since XOR with itself cancels out.
        
        for (int i = 0; i < n; ++i) {
            xor_sum ^= i ^ nums[i];
        }
        
        return xor_sum;
    }
};
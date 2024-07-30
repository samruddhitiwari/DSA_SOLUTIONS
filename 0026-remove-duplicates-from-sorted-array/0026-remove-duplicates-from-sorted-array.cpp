class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          if (nums.empty()) return 0; // Handle edge case of empty vector
    
    int n = nums.size();
    int uniqueIndex = 0; // Index to place the next unique element
    
    // Traverse the vector
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i]; // Move unique element to its correct position
        }
    }
    
    // Return the number of unique elements
    return uniqueIndex + 1; // uniqueIndex is 0-based, so add 1
    }
};
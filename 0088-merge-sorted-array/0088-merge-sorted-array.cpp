class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1; // Last index of the first sorted subarray
    int j = n - 1; // Last index of the second sorted subarray
    int k = m + n - 1; // Last index of the merged array

    // Merge the two arrays starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Copy any remaining elements from nums2
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

// Example usage
int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};
    int m = 3; // Number of initialized elements in nums1
    int n = 3; // Number of elements in nums2

    merge(nums1, m, nums2, n);

    // Print the merged result
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
    }
};
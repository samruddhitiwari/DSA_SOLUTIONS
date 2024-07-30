class Solution {
public:
    // Function to remove spaces and special characters
    string removeSpacesAndSpecialChars(const string& input) {
        string result;
        for (char c : input) {
            // Check if the character is alphanumeric
            if (isalnum(c)) {
                result += c;
            }
        }
        return result;
    }

    // Function to check if a string is a palindrome
    bool isPalindrome(const string& s) {
        // Remove spaces and special characters
        string p = removeSpacesAndSpecialChars(s);

        // Convert string to lowercase for case-insensitive comparison
        for (auto& c : p) {
            c = tolower(c);
        }

        int n = p.length();
        int low = 0;
        int high = n - 1;

        while (low < high) {
            // Check if characters are not the same
            if (p[low] != p[high]) {
                return false;
            }
            // Move towards the center
            low++;
            high--;
        }
        return true;
    }
};

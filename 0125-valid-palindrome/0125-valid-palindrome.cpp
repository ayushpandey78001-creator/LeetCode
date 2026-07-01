class Solution {
public:
   

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    // Loop to check if the string is a palindrome
    while (left < right) {
        // Skip non-alphanumeric characters on the left side
        if (!isalnum(s[left])) 
            left++;
        // Skip non-alphanumeric characters on the right side
        else if (!isalnum(s[right])) 
            right--;
        // If characters are different, it's not a palindrome
        else if (tolower(s[left]) != tolower(s[right])) 
            return false;
        else {
            // Move towards the middle if characters are the same
            left++; 
            right--;
        }
    }
    return true;  // The string is a palindrome if the loop completes
}



};
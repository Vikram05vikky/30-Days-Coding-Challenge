Problem : Length of Last Word

Given a string s consisting of words and spaces, return the length of the last word in the string.A word is a maximal 
substring consisting of non-space characters only.
Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Input:

class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') --i;
        while (i >= 0 && s[i] != ' ') {
            ++res;
            --i;
        }
        return res;
    }
};

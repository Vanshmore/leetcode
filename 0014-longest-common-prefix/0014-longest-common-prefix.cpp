class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) {
        return "";
    }

    std::string prefix = strs[0]; // Assume the first string as the prefix

    for (const std::string& str : strs) {
        // Compare characters of the current string with the prefix
        int i = 0;
        while (i < prefix.length() && i < str.length() && prefix[i] == str[i]) {
            i++;
        }

        // Update the prefix to the common substring
        prefix = prefix.substr(0, i);

        // If the prefix becomes empty, there is no common prefix
        if (prefix.empty()) {
            break;
        }
    }

    return prefix; 
    }
};
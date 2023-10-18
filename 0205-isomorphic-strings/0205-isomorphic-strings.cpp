class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }
    
    unordered_map<char, char> charMap;
    unordered_set<char> mappedChars;
    
    for (int i = 0; i < s.length(); ++i) {
        char sChar = s[i];
        char tChar = t[i];
        
        // If sChar is not in the mapping, add it with tChar
        if (charMap.find(sChar) == charMap.end()) {
            // Check if tChar is already mapped to another character
            if (mappedChars.find(tChar) != mappedChars.end()) {
                return false; // tChar is mapped to more than one character, not isomorphic
            }
            charMap[sChar] = tChar;
            mappedChars.insert(tChar);
        } else {
            // If sChar is in the mapping, it should map to tChar
            if (charMap[sChar] != tChar) {
                return false; // sChar maps to a different character in t
            }
        }
    }
    
    return true;
    }
};
class Solution {
public:
   string reverseWords(string s) {
    istringstream iss(s);
    vector<string> words;

    // Split the string into words using stringstream
    while (iss >> s) {
        words.push_back(s);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Concatenate the reversed words into a single string
    string result;
    for (const string& word : words) {
        result += word + " ";
    }

    // Remove trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}};
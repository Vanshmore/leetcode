class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        std::unordered_map<std::string, int> wordCount;
    std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
    
    // Replace punctuations with space and split the paragraph into words
    for (char& c : paragraph) {
        if (!isalpha(c)) {
            c = ' ';
        }
    }
    
    std::stringstream ss(paragraph);
    std::string word;
    while (ss >> word) {
        if (std::find(banned.begin(), banned.end(), word) == banned.end()) {
            wordCount[word]++;
        }
    }
    
    std::string mostCommonWord;
    int maxCount = 0;
    for (const auto& pair : wordCount) {
        if (pair.second > maxCount) {
            mostCommonWord = pair.first;
            maxCount = pair.second;
        }
    }
    
    return mostCommonWord;
    }
};
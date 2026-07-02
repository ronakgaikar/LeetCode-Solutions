class Solution {
public:
    int lengthOfLastWord(string s) {
       string word;
       stringstream ss(s);
       while(ss >> word);
       return word.size();
    }
};
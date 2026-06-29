class Solution {
public:
    bool isPalindrome(string s) {
    string clean_s = "";

    for (int j = 0; j < s.size(); j++) {
        if (isalnum(s[j])) {
            clean_s += s[j];
        }
    }

    for(int i = 0 ; i<clean_s.size()/2; i++){

        clean_s[i] = tolower(clean_s[i]);
        clean_s[clean_s.size()-i-1] = tolower(clean_s[clean_s.size()-i-1]);

        if(clean_s[i] != clean_s[clean_s.size()-i-1]){
             return false;
        } 
    }
        return true; 

    }
};
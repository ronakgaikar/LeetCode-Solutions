class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();


        for(int i = 0; i<=m-n; i++){
            int j;
            for(j = 0; j<n && haystack[i+j] == needle[j]; j++);
            if(j==n) return i;
        }
        return -1;
    }

};
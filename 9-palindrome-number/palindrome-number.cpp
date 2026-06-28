class Solution {
public:
    bool isPalindrome(int x) {
        long og_num = x;
        long digit;
        long rev_no = 0;

        while(x>0){
            digit = x%10;
            rev_no = rev_no*10 + digit;
            x /= 10;
        }

        if(rev_no == og_num){
            return true;
        }
        else{
            return false;
        }
        
    }
};
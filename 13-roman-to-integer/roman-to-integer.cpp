class Solution {
public:
    int romanToInt(string s) {
        int len;
    
    for(len = 0 ; s[len] != '\0'; len++){
        
    }
    
    int k = 0;
    
   
    int i;
    for(i = 0; i < len; i++){

    int current;
    int next;
    
        if (s[i] == 'I') current = 1;
        if (s[i] == 'V') current = 5;
        if (s[i] == 'X') current = 10;
        if (s[i] == 'L') current = 50;
        if (s[i] == 'C') current = 100;
        if (s[i] == 'D') current = 500;
        if (s[i] == 'M') current = 1000;
      
        if (s[i + 1] == 'I') next = 1;
        if (s[i + 1] == 'V') next = 5;
        if (s[i + 1] == 'X') next = 10;
        if (s[i + 1] == 'L') next = 50;
        if (s[i + 1] == 'C') next = 100;
        if (s[i + 1] == 'D') next = 500;
        if (s[i + 1] == 'M') next = 1000;


        if(current >= next) k += current;
        else k -= current;

}
    
    return k;
    }
    
};
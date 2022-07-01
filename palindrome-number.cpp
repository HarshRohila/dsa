// https://leetcode.com/problems/palindrome-number/
typedef unsigned int uint;

class Solution {
    
uint rev(uint num) {
    uint r = 0;
    
    while(num) {
        uint ld = num % 10;
        num /= 10;
        
        r = r*10 + ld;
    }
   
    
    return r;
}
    
public:
    bool isPalindrome(int x) {
        if  (x < 0) return false;
        
        return x == rev(x);
    }
};
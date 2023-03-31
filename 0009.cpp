class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reverse=0,original=x;
        while(original>0){
            reverse = reverse*10 + original % 10;
            original/=10;
        }
        return reverse ==x;
    }
};

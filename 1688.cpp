class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                match=match+n;
            }
            else{
                n=(n-1)/2;
                match=match+n;
                n=n+1;
            }
        }
        return match;
    }
};

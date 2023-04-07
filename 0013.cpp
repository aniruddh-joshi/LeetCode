class Solution {
public:
    int value(char c){
            if(c=='I'){
                return 1;
            }
            else if(c=='V'){
                return 5;
            }
            else if(c=='X'){
                return 10;
            }
            else if(c=='L'){
                return 50;
            }
            else if(c=='C'){
                return 100;
            }
            else if(c=='D'){
                return 500;
            }
            return 1000;
        }
    int romanToInt(string s) {
        int ans=value(s.back());
        for(int i=s.length()-2;i>=0;i--){
            if(value(s[i])<value(s[i+1])){
                ans=ans-value(s[i]);
            }
            else{
                ans=ans+value(s[i]);
            }
        }
        return ans;
    }
};

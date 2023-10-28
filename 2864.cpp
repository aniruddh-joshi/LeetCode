class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int setBits=0;
        int n= s.size();
        string ans="";
        for(auto &c: s){
            if(c == '1'){
                setBits++;
            }
            ans= ans + '0';
        }
        ans[n-1]= '1';
        for(int i=0; i<=setBits-2; i++){
            ans[i]= '1';
        }
        return ans;
    }
};

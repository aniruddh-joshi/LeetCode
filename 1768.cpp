class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int k=m+n;
        string ans;
        
        for(int i=0;i<k;i++){
            if(i<n) ans+=word1[i];
            if(i<m) ans+=word2[i];
        }
        return ans;
    }
};

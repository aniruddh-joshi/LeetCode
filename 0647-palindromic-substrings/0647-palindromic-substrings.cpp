class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int ans=0;

        // odd length
        for(int i=0;i<n;i++){
            int l=i,r=i;
            if(l>=0 && r<n){
                while(l>=0 && r<n && s[l]==s[r]){
                    ans++;
                    l--;
                    r++;
                }
            }
        }

        // even length
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            if(l>=0 && r<n){
                while(l>=0 && r<n && s[l]==s[r]){
                    ans++;
                    l--;
                    r++;
                }
            }
        }
        return ans;
    }
};
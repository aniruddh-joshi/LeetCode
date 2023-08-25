class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()<=haystack.size()){
            for(int i=0; i<haystack.size()-needle.size()+1 ;i++){
                if(haystack[i]==needle[0] && haystack.substr(i,needle.size())==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};

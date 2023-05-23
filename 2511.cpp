class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxi = 0,j=0,i=0;
        while(i<forts.size()){
            if(forts[i]!=0){
                if(forts[i]==-forts[j]) maxi = max(maxi,i-j-1);
                j=i;
            }
            i++;
        }
        return maxi;
    }
};

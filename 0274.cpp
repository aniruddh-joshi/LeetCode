class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        sort(citations.begin(),citations.end());
        int index=0;
        for(int i=0;i<citations.size();i++){
            index=max(index,min(citations[i],n-i));
        }
        return index;
    }
};

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<pair<int,string>> pairs(n);
        for(int i=0;i<n;i++){
            pairs[i]=make_pair(heights[i],names[i]);
        }
        sort(pairs.rbegin(),pairs.rend());
        vector<string>sorted_names(n);
        for(int i=0;i<n;i++){
            sorted_names[i]=pairs[i].second;
        }
    return sorted_names;
}
};

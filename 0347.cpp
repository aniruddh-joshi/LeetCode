class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            q.push({i.second,i.first});
            if(q.size()>k){
            q.pop();
        }
    }

        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

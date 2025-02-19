#define P pair<int, pair<int, int>>

class Solution 
{
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        priority_queue<P, vector<P>, greater<P>> pq;
        set<pair<int, int>> visited;  
        int m = nums1.size();
        int n = nums2.size();
        
        pq.push({nums1[0] + nums2[0], {0,0}});
        visited.insert({0,0});

        vector<vector<int>> res;

        while(!pq.empty() &&  k--)
        {
            auto it = pq.top();
            pq.pop();
            int sum = it.first;
            int i = it.second.first;
            int j = it.second.second;
            res.push_back({nums1[i] , nums2[j]});
            if(i < m && j+1 < n && visited.find({i , j+1}) == visited.end())
            {
                
                pq.push({nums1[i] + nums2[j+1], {i , j+1}});
                visited.insert({i , j+1});
            }
            if(i+1 < m && j < n && visited.find({i+1 , j}) == visited.end())
            {
                pq.push({nums1[i+1] + nums2[j], {i+1 , j}});
                visited.insert({i+1 , j});
            }
        }
        return res;
    }
};
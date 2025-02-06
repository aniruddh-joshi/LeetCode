class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> combination;
        vector<vector<int>> combinations;
        all_combinations(n, k, combinations, combination);
        return combinations;
    }
private:
    void all_combinations(int& n, int& k, vector<vector<int>>& combinations, vector<int>& combination, int start=1)
    {
        if(combination.size()==k) {combinations.emplace_back(combination); return;}
        for(int num=start; num<=n; num++)
        {
            combination.emplace_back(num);
            all_combinations(n, k, combinations, combination, num+1);
            combination.pop_back();
        }
    }
};
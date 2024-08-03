class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> targetCount;
        unordered_map<int, int> arrCount;

    for (int i = 0; i < target.size(); ++i) {
        targetCount[target[i]]++;
        arrCount[arr[i]]++;
    }
    return targetCount == arrCount;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
    vector<string> strNums;
    for (int i = 0; i < nums.size(); i++) {
        strNums.push_back(to_string(nums[i]));
    }
    
    sort(strNums.begin(), strNums.end(), [](string a, string b) {
        return a + b > b + a;
    });
    
    string result;
    for (int i = 0; i < strNums.size(); i++) {
        result += strNums[i];
    }
    
    // Handle the case where all numbers are zero
    if (result[0] == '0') {
        return "0";
    }
    
    return result;
}
};
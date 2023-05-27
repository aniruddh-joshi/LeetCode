class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0) {
            // No need to continue if there is no more carry
            break;
        }
    }
    if (carry > 0) {
        // If there is still a carry, we need to add an additional digit
        digits.insert(digits.begin(), carry);
    }
    return digits;
    }
};

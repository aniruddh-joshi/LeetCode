class Solution {
public:
    int maximum69Number (int num) {
    // Convert the integer to a string
    string str = to_string(num);
    
    // Find the first '6' digit and replace it with '9'
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '6') {
            str[i] = '9';
            break;
        }
    }
    
    // Convert the string back to an integer and return it
    return stoi(str);
    }
};

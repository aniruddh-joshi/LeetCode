class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        generate_parenthesis(n,0,0,"",result);
        return result;
    }
    void generate_parenthesis(int n,int open,int close,string current,vector<string>&result){
        if(current.size()==n*2){
            result.push_back(current);
            return;
        }
        if(open<n){
            generate_parenthesis(n,open+1,close,current+"(",result);
        }
        if(close<open){
            generate_parenthesis(n,open,close+1,current+")",result);
        }
    }
};

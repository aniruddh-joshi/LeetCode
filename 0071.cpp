class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        int n=path.size();
        for(int i=0;i<n;i++){
            string temp;
            if(path[i]=='/') {
                continue;
            }
            while(i<n && path[i]!='/'){
                temp+=path[i++];
            }

            if(temp==".."){
                if(!s.empty()){
                    s.pop();
                }
            }
            else if(temp=="."){
                continue;
            }
            else{
                s.push(temp);
            }
        }
        string ans="";
        while(!s.empty()){
            ans="/"+s.top()+ans;
            s.pop();
        }
        if(ans.size()>0)  return ans;
        else    return "/";
    }
};

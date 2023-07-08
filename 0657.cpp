class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,d=0;
        for(int i=0;i<moves.size();i++)
            switch(moves[i]){
                case 'R':l--;   break;
                case 'L':l++;   break;
                case 'U':d--;   break;
                default:d++;
            }
            if(l==0 && d==0)    return true;
            else    return false;
    }
};

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for(int i=0;i<sentences.size();i++){
        int words = 0; 
        string sentence = sentences[i];
        stringstream ss(sentence);
        string word;
        while(ss>>word){
            words++;
        }
        maxWords=max(maxWords,words);
        }
        return maxWords;
    }
};

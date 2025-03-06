struct Node {
    Node* links[26] = {nullptr};
    string* word = nullptr;

    bool contain(char ch) { return links[ch - 'a'] != nullptr; }
    void put(char ch, Node* node) { links[ch - 'a'] = node; }
    Node* get(char ch) { return links[ch - 'a']; }
    
    void addWord(string& word) {
        Node* cur = this;
        for (char c : word) {
            if (!cur->contain(c)) cur->put(c, new Node());
            cur = cur->get(c);
        }
        cur->word = &word;
    }
};

class Solution {
public:
    int m, n;
    int DIR[5] = {0, 1, 0, -1, 0};  // Directions: Right, Down, Left, Up
    vector<string> ans;

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m = board.size(); 
        n = board[0].size();
        
        // Step 1: Build Trie
        Node trieNode;
        for (string& word : words) trieNode.addWord(word);

        // Step 2: Start DFS from every cell
        for (int r = 0; r < m; ++r)
            for (int c = 0; c < n; ++c)
                dfs(board, r, c, &trieNode);
        
        return ans;
    }

    void dfs(vector<vector<char>>& board, int r, int c, Node* cur) {
        // Base Case: Out of bounds or already visited or not present in Trie
        if (r < 0 || r == m || c < 0 || c == n || board[r][c] == '#' || !cur->contain(board[r][c])) 
            return;
        
        char orgChar = board[r][c];
        cur = cur->get(orgChar);

        // If this node completes a word, add to answer
        if (cur->word != nullptr) {
            ans.push_back(*cur->word);
            cur->word = nullptr; // Mark as found to avoid duplicates
        }

        // Mark as visited
        board[r][c] = '#';

        // Explore all 4 directions
        for (int i = 0; i < 4; ++i) 
            dfs(board, r + DIR[i], c + DIR[i+1], cur);

        // Restore original character (Backtrack)
        board[r][c] = orgChar;
    }
};
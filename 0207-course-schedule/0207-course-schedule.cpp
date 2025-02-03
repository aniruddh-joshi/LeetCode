class Solution {
public:
    bool kahnsAlgorithm(queue<int> &queue, unordered_map<int, vector<int>> &graph, vector<int> &inDegree){
        int count = 0;
        while(!queue.empty()){
            int u = queue.front();
            queue.pop();
            count++;
            for(auto v: graph[u]){
                inDegree[v]--;
                if(inDegree[v] == 0) {
                    queue.push(v);
                }
            }

        }
        if(count == graph.size()) return true;
        else return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> graph;
        vector<int> inDegree(numCourses,0);
        for(auto &edge: prerequisites){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            inDegree[v]++;
        }

        queue<int> queue;
        for(int i = 0; i< numCourses; i++){
            if(inDegree[i] == 0) queue.push(i);
        }

        if(queue.size() == 0) return false;

        if(kahnsAlgorithm(queue,graph,inDegree)) return true;
        else return false;

    }
};
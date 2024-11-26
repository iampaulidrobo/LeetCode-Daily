class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> root_node(n, 1);
        

        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[i].size();j++){
                    root_node[edges[i][1]]=0;

            }
        }
    }
};
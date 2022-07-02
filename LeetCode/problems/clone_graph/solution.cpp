/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void cloned_DFS(Node* node, map<Node*,Node*> &dataset){
        if(!node)       return ;
        Node *new_node  =new Node(node->val); 
        dataset[node] = new_node;
        for(auto node_it:node->neighbors){
            if(!dataset[node_it])
                cloned_DFS(node_it,dataset);
            
            new_node->neighbors.push_back(dataset[node_it]);
        }
    }
    Node* cloneGraph(Node* node) {
        
//         //Cloned BFS
        if(!node) return node;
        if(!node->neighbors.size()) return new Node(node->val);
            
//         map<Node* ,Node*> dataset;
//         queue<Node*> node_queue;
//         node_queue.push(node);
//         while(!node_queue.empty()){
//             Node* node_obj = node_queue.front();node_queue.pop();
//             dataset[node_obj] = new Node(node_obj->val);
//             for(auto node_it: node_obj->neighbors){
//                 if(!dataset[node_it])
//                     node_queue.push(node_it);
//             }            
//         }
//         for(auto node_it:dataset){
//             for(auto node_itt:node_it.first->neighbors){
//                 node_it.second->neighbors.push_back(dataset[node_itt]);
//             }
//         }
        //DFS code
        map<Node* ,Node*> dataset;
        cloned_DFS(node,dataset);
        return dataset[node];
    }
};
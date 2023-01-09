class Solution {
  public:
    
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int Solve(Node *node){
        if(node==NULL){
            return 0;
        }
        int prev=node->data;
        node->data=Solve(node->left)+Solve(node->right);
        return (node->data)+prev;
    }
    void toSumTree(Node *node)
    {
        
        Solve(node);
    }
};

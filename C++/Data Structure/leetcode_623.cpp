//this is the solution for problem no 623 on leetcode.
//the solution uses BFS
//https://leetcode.com/problems/add-one-row-to-tree/

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==NULL) return root;
        int ld=0; //to store the local depth
        queue<TreeNode*> q; //a queue for performing BFS
        if(depth==1){ // checking edge cases
            TreeNode* newroot= new TreeNode(val);
            newroot->left=root;
            newroot->right=NULL;
            return newroot;
        }
        q.push(root);
        while(!q.empty()){
            ++ld; // after each iteration, our local depth increases by one
            int sz= q.size(); 
            //standard bfs template
            for(int i=0;i<sz;i++){
                TreeNode* temp= q.front();
                q.pop();
                if(ld==depth-1){ // checking if this is the depth after which we have to insert new nodes
                    TreeNode* newl= new TreeNode(val);
                    if(temp->left)  newl->left= temp->left;  // if current node is not the last, then assign the left subtree to new node
                    temp->left= newl;
                    TreeNode* newr= new TreeNode(val);
                    if(temp->right) newr->right= temp->right;
                    temp->right= newr;
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(ld==depth-1)
                return root; //to save processing time because once roots inserted, no need to change anything in tree
        }
        return root;
    }
};
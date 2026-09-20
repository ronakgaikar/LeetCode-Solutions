/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //RECURSION METHOD
    // void postOrder(TreeNode* root, vector<int>& arr){
    //     if(root==nullptr){
    //         return;
    //     }

    //     postOrder(root->left, arr);
    //     postOrder(root->right, arr);

    //     arr.push_back(root->val);
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> ans;

    //     postOrder(root, ans);

    //     return ans;

    // }


    //ITERATIVE METHOD - 2 STACKS
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1,st2;
        st1.push(root);

        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);

            if(root->left != NULL) st1.push(root->left);
            if(root->right != NULL) st1.push(root->right);
        }

        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        

        return postorder;
    }
};
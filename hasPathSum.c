bool hasPathSum(struct TreeNode* root, int targetSum){
    if (root == NULL) return false;

    int newTargetSum = targetSum - root->val;

    if (newTargetSum == 0 && root->left == NULL && root->right == NULL)
        return true;

    bool flag = false;

    flag = flag || hasPathSum(root->left, newTargetSum);
    flag = flag || hasPathSum(root->right, newTargetSum);

    return flag;
}

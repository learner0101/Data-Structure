/*count leaves in a Binary Tree*/

int countLeaves(Node* root)
{
  if(root==NULL)
    return 0;
  if(root->left==NULL && root->right==NULL)
    return 1;
else
{
    return (countLeaves(root->left)+countLeaves(root->right));
}
}


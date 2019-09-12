// Function should return the sum of all the elements of the binary tree
long int sumBT(Node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        return (root->key+sumBT(root->left)+sumBT(root->right));
    }
}

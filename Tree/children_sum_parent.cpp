/*children sum parent- sum to left and right node is equal to root data */
int isSumProperty(Node *node)
{
 // Add your code here
 if(node==NULL)
    return 0;
else
{
    if((node->left!=NULL || node->right!=NULL )&&(node->data!=node->left->data+node->right->data))
        return 0;
    isSumProperty(node->left);
    isSumProperty(node->right);
}
return 1;
}

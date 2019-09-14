/* Should convert tree to its mirror */
void mirror(Node* node) 
{
    if(node==NULL)
        return;
    else
    {
        struct Node* temp;
        mirror(node->left);
        mirror(node->right);
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }
}

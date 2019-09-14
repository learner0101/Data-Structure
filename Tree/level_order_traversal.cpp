/* level order traversal */

void printGivenLevel(Node* node, int level)  
{  
    if(node==NULL)
        return;
    if(level==1)
        cout<<node->data<<" ";
    else if(level>1)
        {
            printGivenLevel(node->left,level-1);
            printGivenLevel(node->right,level-1);
        }
}  

int height(Node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the height of each subtree */
        int lheight = height(node->left);  
        int rheight = height(node->right);  
  
        /* use the larger one */
        if (lheight > rheight)  
            return(lheight + 1);  
        else return(rheight + 1);  
    }  
}

void levelOrder(Node* node)
{
  //Your code here
  int h = height(node);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(node, i);  
}  



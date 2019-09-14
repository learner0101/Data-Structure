/*ternary expression to tree */

Node *convertExpression(string str,int i)
{
//add code here.

    if(i>=str.length())
            return NULL;
    Node*root=new Node();
    if(str[i]!='?'&&str[i]!=':')
        {
            root->data=str[i];
        }
    if(str[i+1]=='?')
        root->left=convertExpression(str,i+2);
    else if(str[i+1]==':')
        root->right=convertExpression(str,i+2);

    return root;
}

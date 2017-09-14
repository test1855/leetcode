//
//  2255重建二叉树.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/6.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
using namespace std;
int x=0;
struct TreeNode
{
    char value;
    TreeNode *left,*right;
};

TreeNode* buildTree(string pre,string mid)
{
    if(pre.length()==0)
        return NULL;
    TreeNode *root=new TreeNode();
    root->value=pre[0];
    int index=mid.find(pre[0],0);
    root->left=buildTree(pre.substr(1,index), mid.substr(0,index));
    root->right=buildTree(pre.substr(index+1,pre.length()-index), mid.substr(index+1,mid.length()-index-1));
    return root;
}

void postOrder(TreeNode* root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->value;
    }
}
/*
 //前序：根左右
 //中序：左根右
 //后序：左右根
 //一定要先建树，再后序输出
 //string.find(char,index)函数 返回下表index
 //string.substr(index,length)从index下标开始长度为length的字符串
int main()
{
    string pre,mid;
    while(cin>>pre>>mid)
    {
        TreeNode *root=NULL;
        root=buildTree(pre, mid);
        postOrder(root);
        cout<<endl;
    }
    return 0;
}
*/

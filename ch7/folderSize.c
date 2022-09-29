#include <stdlib.h>
#include "folderSize.h"

treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode){
    treeNode* root = (treeNode*)malloc(sizeof(treeNode));
    root->size=size;
    root->left=leftNode;
    root->right=rightNode;
    return root;
}

int postorder_FolderSize(treeNode* root){
    if(root){
        postorder_FolderSize(root->left);
        postorder_FolderSize(root->right);
        Folder_Size += root->size;
    }
    return Folder_Size;
}
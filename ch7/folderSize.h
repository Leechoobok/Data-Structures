#pragma once

extern int Folder_Size;
typedef struct treeNode{
    int size;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode);
int postorder_FolderSize(treeNode* root);


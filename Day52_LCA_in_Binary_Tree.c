/*
Day 52: LCA in Binary Tree
Problem Statement:
Find the Lowest Common Ancestor (LCA) of two nodes in a Binary Tree.

Input Format:
- First line contains integer N
- Second line contains level-order traversal (-1 represents NULL)
- Third line contains two node values

Output Format:
- Print the LCA value

Example:
Input:
7
1 2 3 4 5 6 7
4 5

Output:
2
*/

struct Node* LCA(struct Node* root, int n1, int n2) {
    if(root == NULL)
        return NULL;

    if(root->data == n1 || root->data == n2)
        return root;

    struct Node* left = LCA(root->left, n1, n2);
    struct Node* right = LCA(root->right, n1, n2);

    if(left != NULL && right != NULL)
        return root;

    if(left != NULL)
        return left;

    return right;
}
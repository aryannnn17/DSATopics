
// Binary Search Tree
#include <bits/stdc++.h>
using namespace std;

// structure of BST
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
/// @brief insert elements in binary tree
/// @param root
/// @param val
/// @return root node
Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    else if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

/// @brief print in inorder
/// @param root
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
    // cout << root->data << endl;
}

/// @brief Seach in Binary Tree
/// @param root
/// @param key seach element
/// @return root node
Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    else
    {
        return searchInBST(root->right, key);
    }
}

/// @brief To check left sucsessor in BST
/// @param root
/// @return root node
Node *inOrderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

/// @brief To Delete node from a BST
/// @param root
/// @param key delete element
/// @return root node
Node *deleteInBST(Node *root, int key)
{

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        // CASE 1 and CASE 2 ( no child node  / one child node )
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // CASE 3 ( two child nodes)
        Node *temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

/// @brief to find an curr position of an element in inorder array
/// @param inorder 
/// @param start 
/// @param end 
/// @param curr 
/// @return index of curr 
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
        
    }
    return -1;
}

/// @brief to build a BST from preorder and inorder
/// @param preorder 
/// @param inorder 
/// @param start 
/// @param end 
/// @return node of root 
Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos- 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}
//
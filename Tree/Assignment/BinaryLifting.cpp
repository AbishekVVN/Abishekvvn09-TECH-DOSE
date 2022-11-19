#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

//return a new node with the given value
struct node *getNode(int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));

    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

//inserts nodes in the binary search tree
struct node *insertNode(struct node *root, int val)
{
     if(root == NULL)
         return getNode(val);

     if(root->key < val)
         root->right = insertNode(root->right,val);

     if(root->key > val)
         root->left = insertNode(root->left,val);

     return root;
}

//inorder traversal of the binary search tree
void inorder(struct node *root)
{
    if(root == NULL)
        return;

    //traverse the left subtree
    inorder(root->left);

    //visit the root
    printf("%d ",root->key);

    //traverse the right subtree
    inorder(root->right);
}

int main()
{
   struct node *root = NULL;

   root = insertNode(root,100);
   root = insertNode(root, 50);
   root = insertNode(root, 200);
   root = insertNode(root, 10);
   root = insertNode(root, 60);
   root = insertNode(root, 150);
   root = insertNode(root, 300);


   inorder(root);

   return 0;
}

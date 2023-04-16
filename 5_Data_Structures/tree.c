// implements a list of numbers as binary search tree

#include <stdio.h>
#include <stdlib.h>

//represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // tree of size 0
    node *tree = NULL;

    // add number to a list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    // add number to a list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        // free memory block ....
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n; // since this leaf if less then root, we stich it to the left

    // add number to list
    n = malloc(sizeof(node));
    if (n==NULL)
    {
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n; // stich to the right, since it is bigger then root;

    print_tree(tree);
    free_tree(tree);
}

//print tree function:
void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}

//free tree function:
void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}
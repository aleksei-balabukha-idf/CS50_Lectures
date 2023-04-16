// function for binary search in binary tree:
bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false; // if no tree - number is obviously not there
    }
    else if (number < tree->number)
    {
        return search(tree->left, number); // if value we are looking for is lower than root, search in the left Leaf
    }
    else if (number > tree->number)
    {
        return search(tree->right, number); // if value is higher - search in the right leaf
    }
    else
    {
        return true; // if value equal to root - we found it
    }
}
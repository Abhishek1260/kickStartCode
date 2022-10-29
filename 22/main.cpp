#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

void printTree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
    return;
}

int search(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildTree(int postOrder[], int inOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = end;
    int curr = postOrder[idx];
    idx--;
    node *newNode = new node(curr);
    int pos = search(inOrder, start, end, curr);
    if (start == end)
    {
        return newNode;
    }
    newNode->right = buildTree(postOrder, inOrder, pos + 1, end);
    newNode->left = buildTree(postOrder, inOrder, start, pos - 1);
    return newNode;
}

int main()
{

    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(postOrder, inOrder, 0, 4);
    printTree(root);

    return 0;
}
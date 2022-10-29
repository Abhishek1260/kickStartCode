#include <iostream>
using namespace std;

class node
{
public:
    int data;
    struct node *right;
    struct node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

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

void inOrderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderprint(root->left);
    cout << root->data << " ";
    inOrderprint(root->right);
}

node *buildTree(int preOrder[], int inOrder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int idx = 0;
    int curr = preOrder[idx];
    idx++;
    node *newNode = new node(curr);
    if (start == end)
    {
        return newNode;
    }
    int pos = search(inOrder, start, end, curr);
    newNode->left = buildTree(preOrder, inOrder, start, pos - 1);
    newNode->right = buildTree(preOrder, inOrder, pos + 1, end);
    return newNode;
}

int main()
{

    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};
    node *root = buildTree(preOrder, inOrder, 0, 4);
    inOrderprint(root);

    return 0;
}
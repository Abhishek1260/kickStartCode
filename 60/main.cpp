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
    int pos = search(inOrder, start, end, curr);
    node *newNode = new node(curr);
    if (start == end)
    {
        return newNode;
    }
    newNode->right = buildTree(postOrder, inOrder, pos + 1, end);
    newNode->left = buildTree(postOrder, inOrder, start, pos - 1);
    return newNode;
}

void printSequence(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printSequence(root->left);
    cout << root->data << " ";
    printSequence(root->right);
}

int main()
{

    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(postOrder, inOrder, 0, 4);
    printSequence(root);

    return 0;
}
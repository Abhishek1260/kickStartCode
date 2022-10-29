#include <iostream>
#define nn(x) new Node(x)
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int printCount(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return printCount(root->left) + printCount(root->right) + 1;
}

int printSum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return printSum(root->left) + printSum(root->right) + root->data;
}

int main()
{

    Node *root = nn(1);
    root->left = nn(2);
    root->right = nn(3);
    root->left->left = nn(4);
    root->left->right = nn(5);
    root->right->left = nn(6);
    root->right->right = nn(7);

    cout << printCount(root) << endl;
    cout << printSum(root) << endl;

    return 0;
}
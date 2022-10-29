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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->left);
    return max(leftHeight, rightHeight) + 1;
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

    cout << calcHeight(root) << " " << endl;

    return 0;
}
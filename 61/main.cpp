#include <iostream>
#include <queue>
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

void printLevelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *newNode = q.front();
        q.pop();
        if (newNode != NULL)
        {
            cout << newNode->data << " ";
            if (newNode->left)
            {
                q.push(newNode->left);
            }
            if (newNode->right)
            {
                q.push(newNode->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    printLevelOrder(root);

    return 0;
}